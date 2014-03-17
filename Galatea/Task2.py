# http://ideone.com/K4r3iZ

def reverse(strs):
    temp = []
    for i in range(len(strs)-1, -1, -1):
        temp.append(strs[i])
    return ''.join(temp)

def solution(V,R):
	
	alphalist = '0123456789abcdefghijklmnopqrstuvwxyz' #36 symbols list
	
	x = ''
	
	if(V==0):
		return '0';
	
  while V:
  	x=x+alphalist[V % R] #lookup from symbols list
  	V /= R
  		
  return reverse(x)
  

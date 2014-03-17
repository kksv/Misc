#include<stdio.h>

float Average(int A[], int N){
    float average = 0.0;
    int i;
    for(i=0;i<N;i++)
        average+=A[i];
    return average/N;    
}

float Absolute(float A){
    if (A<0)
        return A*-1;
    return A;
}

float MaxOf(float A, float B){
	if (A>B)
		return A;
	return B;
}

int solution(int A[], int N) {
    // write your code in C90

    if(N==0)
        return -1;
    
    int index = 0;
    
    float Avg = Average(A,N);
    
    int i = 0;
    
    float MaxDev = Absolute(A[i]-Avg);
    
    for(i=1;i<N;i++){
    	if(MaxDev < Absolute(A[i]-Avg) ){
    		MaxDev = Absolute(A[i]-Avg);
    		index = i;
    	}
    		
    }
	return index;
}

int main(){
	
	int A[] = {9,-10,-3,4};

	printf("Solution : %d",solution(A,4));
	
	return 0;
}

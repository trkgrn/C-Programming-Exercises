#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int A[8]= {98,91,91,94,96,95,97,92};
	int i,j,tut;
	
	for(i=0;i<8;i++){
		tut=A[i];
		if(A[i]<A[i-1]){
		for(j=i-1;j>=0;j--){
			if(tut<A[j]){
				
				A[j+1]=A[j];
				A[j]=tut;
			}				
			}			
		}
	}
	
	
	for(i=0;i<8;i++){
		printf("%d ",A[i]);
	}
	
	
	
	
	return 0;
}

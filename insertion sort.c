#include <stdio.h>
#include <stdlib.h>
/* 6 ,5 ,3 ,1 ,8 ,7 ,2 ,4 					https://3.bp.blogspot.com/-25AoOo1AWa8/WOTm8diDg6I/AAAAAAAACyk/JrhB1J1oL_I27yVIRKUcrowDSHCR_LsqACLcB/s1600/Inple.gif

   5 ,6 ,3 ,1 ,8 ,7 ,2 ,4
   
   3 ,5 ,6 ,1 ,8 ,7 ,2 ,4
   
   1 ,3 ,5 ,6 ,8 ,7 ,2 ,4
   
   1 ,3 ,5 ,6 ,8 ,7 ,2 ,4
   
   1 ,3 ,5 ,6 ,7 ,8 ,2 ,4
   
   1 ,2 ,3 ,5 ,6 ,7 ,8 ,4
   
   1 ,2 ,3 ,4 ,5 ,6 ,7 ,8

*/





/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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

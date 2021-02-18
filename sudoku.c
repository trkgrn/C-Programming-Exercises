#include <stdio.h>
#include <stdlib.h>

	static int B[9][9] =  { {1, 0, 0, 4, 8, 9, 0, 0, 6}, 
         {7, 3, 0, 0, 0, 0, 0, 4, 0}, 
         {0, 0, 0, 0, 0, 1, 2, 9, 5}, 
         {0, 0, 7, 1, 2, 0, 6, 0, 0}, 
         {5, 0, 0, 7, 0, 3, 0, 0, 8}, 
         {0, 0, 6, 0, 9, 5, 7, 0, 0}, 
         {9, 1, 4, 6, 0, 0, 0, 0, 0}, 
         {0, 2, 0, 0, 0, 0, 0, 3, 7}, 
         {8, 0, 0, 5, 1, 2, 0, 0, 4} };	
              			              				 
	static int zero=0;
	
	int cagir(int a, int b) {		
		int i,j,k,m,n,p,y,sayilar=9,toplam=0;
		int K[9]={1,2,3,4,5,6,7,8,9};	
		    for(i=a;i<=a+2;i++){ //2
               	for(j=b;j<=b+2;j++) 	{//5

               		if(B[i][j]==0){ // 0 Bulucu               			               			               			
               			for(k=0;k<=8;k++){ // Tarama yatay
						if(B[i][k]!=0){
							for(m=0;m<=8;m++){								
								if(B[i][k]==K[m]){
									sayilar=sayilar-1;
									K[m]=100;																		
								}								
							}																		
						}

						   } // Tarama yatay

               			for(y=0;y<=8;y++){ // Tarama dikey
						if(B[y][j]!=0){
							for(m=0;m<=8;m++){								
								if(B[y][j]==K[m]){
									sayilar=sayilar-1;
									K[m]=100;																		
								}								
							}
	
												
						}

						   } // Tarama dikey
						   
						for(k=a;k<=a+2;k++){ //Tarama 3x3
							for(y=b;y<=b+2;y++){
								if(B[k][y]!=0){
									for(m=0;m<=8;m++){
										if(B[k][y]==K[m]){
											sayilar=sayilar-1;
											K[m]=100;
										}
									}
								}
							}
						} //Tarama 3x3
						   
							if(sayilar==1){
									for(n=0;n<=8;n++){
										if(K[n]!=100){
											B[i][j]=K[n];
											zero=zero-1;
											for (p=0;p<=8;p++){
												K[p]=p+1;
											}
											sayilar=9;
											break;
										}
									}
								}   
							else {
								for (p=0;p<=8;p++){
									K[p]=p+1;
											}
								sayilar=9;
								
							}
								
					   } // 0 Bulucu
               		else continue;
               		
				   }
				   }			
	}
		
int main(int argc, char *argv[]) {	
	    int i,j;
		printf("Oncesi;\n");
	    
               for(i=0;i<9;i++){
               	for(j=0;j<=8;j++) 	{
               		
               		printf("%d ",B[i][j]);
               		
				   }
				   printf("\n");
			   }	    

	    
	    for(i=0;i<=8;i++){
	    	for(j=0;j<=8;j++){
	    		if(B[i][j]==0)
	    		zero=zero+1;
			}
		}
	      
while(zero>0){
		
       
	cagir(0,0);
	cagir(0,3);
	cagir(0,6);
	cagir(3,0);
	cagir(3,3);
	cagir(3,6);
	cagir(6,0);
	cagir(6,3);
	cagir(6,6);

	}
	
		printf("\nSonrasi;\n");
  
       for(i=0;i<9;i++){
               	for(j=0;j<=8;j++) 	{
               		
               		printf("%d ",B[i][j]);             		
				   }
				   printf("\n");
			   }             
	return 0;
}

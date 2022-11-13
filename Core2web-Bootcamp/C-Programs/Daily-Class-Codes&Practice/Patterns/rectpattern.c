#include<stdio.h>

void main() {
	
	int x,y;
	printf("Enter no of rows : ");
      	scanf("%d",&x); 	
	printf("Enter no of cols : ");
      	scanf("%d",&y); 

	for(int i=1 ; i<=x ; i++) {
		for(int j=1 ;j<=y ; j++) {
			if(i==1 ||i==x){
				printf("*");
			}
			else if(j==1 || j==y) {
				printf("*");
			
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	
	}	


}

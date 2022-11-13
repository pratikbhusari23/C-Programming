#include<stdio.h>

void main() {
	
	int x,y,z=1;
	scanf("%d",&x);
	scanf("%d",&y);
 

	for(int row=1 ;row<=x ;row++) {
		for(int col =1 ;col<=y ;col++) {
			if(z%2==0) {
				printf("%d\t",z*10);
				
			}
			else {

				printf("%d\t",z);
			}
			z++; 	
		}	
		
		printf("\n");
		
	}
}


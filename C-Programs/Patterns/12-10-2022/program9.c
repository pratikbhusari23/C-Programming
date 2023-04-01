#include<stdio.h>

void  main() {

	int x,y=9;

	printf("Enter no of rows : ");
	scanf("%d",&x);

	for (int i=1 ; i<=x ; i++) {
		for(int j=1 ; j<=x ; j++) {
			if(y%2==0){
				printf("%d\t",y*y);
			}
			else{ 
				printf("%d\t",y);
			}
			y--;
		}
		
		printf("\n");
	
	}
}

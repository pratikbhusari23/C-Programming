#include<stdio.h>

void  main() {

	int x,y=4;

	printf("Enter no of rows : ");
	scanf("%d",&x);

	for (int i=1 ; i<=x ; i++) {
		for(int j=1 ; j<=x ; j++) {

			printf("%c\t",y+64);
			
		
		}
		y--;
		printf("\n");
	
	}

}

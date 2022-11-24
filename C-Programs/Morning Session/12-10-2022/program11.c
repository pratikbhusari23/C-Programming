/*
 
  1 3 5 
  5 7 9
  9 11 13

  */

#include<stdio.h>

void  main() {

	int x,y=1;

	printf("Enter no of rows : ");
	scanf("%d",&x);

	for (int i=1 ; i<=x ; i++) {
		for(int j=1 ; j<=x ; j++) {

			printf("%d\t",y);
			y+=2;	
		
		}
		y-=2;
		printf("\n");
	
	}

}

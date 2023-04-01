/*
 
  A b C
  d E f
  H h I

  */


#include<stdio.h>

void  main() {

	int x,y=1;

	printf("Enter no of rows : ");
	scanf("%d",&x);

	for (int i=1 ; i<=x ; i++) {
		for(int j=1 ; j<=x ; j++) {
			if(y%2==0) {
				printf("%c\t",y+96);
			}
			else {
				printf("%c\t",y+64);
			}
			y++;
		}
		
		printf("\n");
	
	}
}

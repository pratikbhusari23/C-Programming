#include<stdio.h>

void main() {

	int x;
	printf("Enter no of Rows : ");
	scanf("%d",&x);
	int y=1;

	for(int i=1 ; i<=x ;i++) {
		for(int j=1 ;j<=x ;j++){

			printf("%d\t",y);
			y++;
		
		}
		y-=2;

		printf("\n");
	}



}

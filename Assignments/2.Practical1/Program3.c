/* Write a progarm to find maximum among 3 no's */
#include<stdio.h>

void main() {


	int x;
	int y;
	int z;

	printf("Enter 1st No : ");
	scanf("%d",&x);
	printf("Enter 2nd No : ");
	scanf("%d",&y);
	printf("Enter 3rd No : ");
	scanf("%d",&z);

	if(x<y && x<z) {
		printf("%d is minimum among %d %d %d\n",x,x,y,z);
	
	}
	else if(y<z && y<x) {
		printf("%d is minimum among %d %d %d\n",y,x,y,z);

	}
	
	else if(z<y && z<x) {
		printf("%d is minimum among %d %d %d\n",z,x,y,z);
	}
	else if(x=y=z) {
		printf("All are Equal\n");
	}


}

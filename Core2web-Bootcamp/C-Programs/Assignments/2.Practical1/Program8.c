/* Write a Program to check whether given angles make a triangle or not */

#include<stdio.h>
void main() {

	int x;
	int y;
	int z;

	printf("Enter Angle of a Triangle : ");
	scanf("%d",&x);
	printf("Enter Angle of a Triangle : ");
	scanf("%d",&y);
	printf("Enter Angle of a Triangle : ");
	scanf("%d",&z);
	
	if(x+y+z==180) {
		printf("Yes %d and %d and %d are Sides of a Traingle\n",x,y,z);
	
	}else {
		printf("NO %d and %d and %d are NOT sides of a Traingle\n",x,y,z);
		
	}

}

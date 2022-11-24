/* Write a Program to find the sum of numbersthat are not divisible by 3 up to a given number */

#include<stdio.h>
void main() {
	int x;
	int count=0,i;
	printf("Enter No : ");
	scanf("%d",&x);

	for(i=1; i<=x; i++){
		if(i%3==0) {
			count++;
		}
	}
	printf("Count = %d\n",count);
	
	



}

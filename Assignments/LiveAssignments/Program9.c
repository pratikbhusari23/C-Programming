/* Write a Program to print all Divisors of a no */

#include<stdio.h>
void main() {
	int x;
	int count =0 ;
	printf("Enter No : ");
	scanf("%d",&x);
	for(int i=x ;i>=1;i--) {
		if(x%i==0) {
			count++ ;
		}
	
	}printf("No of Divisores = %d\n",count);

}

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
			printf("Divisors of 16 are %d\n",i);
		}
	
	}printf("No of Divisores = %d\n",count);

}

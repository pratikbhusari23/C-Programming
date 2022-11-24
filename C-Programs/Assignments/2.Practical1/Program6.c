/* Write a Program to take 10 inputs from user and print their sum and avg */

#include<stdio.h>
void main() {
	int a;
	int sum=0;
	float avg;
	for(int i=1; i<=10 ; i++) {
		printf("Enter No : ");
		scanf("%d",&a);
		sum =sum + a ;
       		avg = sum/i ;		
	}
	printf("sum :%d\n",sum);
	printf("avg :%f\n",avg);
}

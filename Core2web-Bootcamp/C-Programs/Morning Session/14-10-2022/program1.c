/*
 
  wap to print the factorial of given input number from user 

input : 5
output : factorial of 5 is 120

*/

#include<stdio.h>

void main() {
	
	int x,fact=1;
	printf("Enter the number : ");
	scanf("%d",&x);
	
	for(int i=x ; i>=1 ; i--) {
		fact=fact*i;
	}
	printf("Factorial of %d is %d .\n",x,fact);

}

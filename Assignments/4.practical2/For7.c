
/* take an input from the userr and print the SUM of digits */

#include<stdio.h>
void main() {
	int x,sum=0;
	printf("Enter no : ");
	scanf("%d",&x);
	while(x!=0) {
	
		sum = sum + x%10 ;
		x = x/10 ;

	}
	printf("Sum = %d\n",sum);

	
	
}

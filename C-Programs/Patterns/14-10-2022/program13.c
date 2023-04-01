/*
 
wap to print the factorial of each number between a given range 

input start = 1
	end = 5

output = factorial of 1 is 1
	 factorial of 2 is 2
	 factorial of 3 is 6
	 factorial of 4 is 24
	 factorial of 5 is 120

*/


#include<stdio.h>

void main() {
	
	int start,end,fact;
	printf("Enter start range : ");
	scanf("%d",&start);
	printf("Enter end range : ");
	scanf("%d",&end);

	for(int i=start ; i<=end ; i++) {
		fact=1;
		for(int j=i ; j>=1 ; j--) {
			fact=fact*j;
		}
		printf("factorial of %d is %d .\n",i,fact);
		
	}
}


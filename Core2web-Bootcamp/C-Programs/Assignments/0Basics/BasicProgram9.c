/* Write a program to check whether no is Positive or Negative */

#include<stdio.h>
void main() {
	int x;
	printf("Enter no : ");
	scanf("%d",&x);

	if(x>0) {
		printf("%d is a Positive no\n",x);
	}else if(x<0) {
		printf("%d is Negative no\n",x);
	}else {
		printf("%d is neither positive nor negative\n",x);
	}
}


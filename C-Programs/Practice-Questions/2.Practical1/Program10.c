/* Write a Program to check whether Given no is a Prime no or not */

#include<stdio.h>

void main() {
	int x,temp=0;
	printf("Enter no : ");
	scanf("%d",&x);

	for(int i=2 ;i<=x/2 ;i++) {
		if(x%i==0) {
			temp++;
		}
	
	}
	if(temp==0 && x!=1){
		printf("%d is a Prime no\n",x);
	
	}
	else {
		printf("%d is not a Prime no\n",x);
	
	}


}

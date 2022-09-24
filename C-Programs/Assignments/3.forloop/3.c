/* Write a Program to print all even numbers in reverse order and odd numbers in standard way .Both seperately within a range */

#include<stdio.h>

void main() {
	int x,y,p,q,i,j;
	
	printf("Enter start no : ");
	scanf("%d",&x);
	printf("Enter end  no : ");
	scanf("%d",&y);

	p=x;
	q=y;
	if(x%2==0) {
		p+=1;

	
	}
	if(y%2!=0) {
		q-=1;
		
	
	}
	for( i=p,j=q; ;i+=2,j-=2){
		if(j>=x){
		
			printf("%d \t",j);

		}
		else {
			printf("\t");
		}
		if(i<=y){
		
			printf("%d \t",i);
		}
		else {
			printf("\t");
		}
		
		if(i>=y && j<=x) {
			break;
		
		}
		printf("\n");

	}
	printf("\n");
}

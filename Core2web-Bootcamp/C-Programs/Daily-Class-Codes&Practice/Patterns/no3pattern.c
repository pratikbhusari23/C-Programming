/* write a program to print table of any given no */
#include<stdio.h>

int main() {

	int x;
	printf("Enter no : ");
	scanf("%d",&x);

	for(int i=1 ; i<=5; i++) {
		printf("%d * %d = %d \n",x,i,i*x);

	}

}

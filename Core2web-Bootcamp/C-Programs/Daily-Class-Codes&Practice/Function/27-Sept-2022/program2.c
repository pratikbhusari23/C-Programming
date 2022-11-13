#include<stdio.h>

void fun(int *x) {
	
	printf("%d\n",*x);

}

void main() {

	int a=10;
	fun(&a);

}


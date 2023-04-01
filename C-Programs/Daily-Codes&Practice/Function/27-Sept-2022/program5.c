#include<stdio.h>

void fun(int **ptr) {

	printf("%d\n",**ptr);
}

void main() {
	
	int x=10;
	int *ptr1=&x;
	int **ptr2=&ptr1;

	fun(ptr2);
	fun(&ptr1);

/*	int x=10;
	int *ptr1=&x;
	int **ptr2=&ptr1;
	int **ptr3=ptr2;

	fun(&ptr2);
	fun(*int(*ptr3));
	fun(*int(*ptr1));


*/

}

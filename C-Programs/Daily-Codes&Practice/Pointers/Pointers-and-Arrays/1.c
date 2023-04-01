#include<stdio.h>

void main() {

	int arr[]={10,2,3,4,5};

	int *iptr=&(arr[0]);

	printf("%p\n",iptr);
	printf("%p\n",*iptr);
}

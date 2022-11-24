#include<stdio.h>

void funarr(int *arr) {
	printf("%d\n",*arr);

}

void main() {

	int arr1[] = {10,20,30,40};

	funarr(arr1);
	funarr(&arr1[1]);



}

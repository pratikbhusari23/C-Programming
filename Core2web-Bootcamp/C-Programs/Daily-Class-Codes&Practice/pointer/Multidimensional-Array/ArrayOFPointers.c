#include<stdio.h>

void main() {

	int x=10;
	int y=20;
	int z=30;

	int *arr[3]={&x,&y,&z};

	printf("%p\n",arr[0]);
	printf("%p\n",arr[1]);
	printf("%p\n",arr[2]);

	printf("%d\n",*((int)(*arr[0])));
	printf("%d\n",*((int)(*arr[1])));
	printf("%d\n",*((int)(*arr[2])));
	
}

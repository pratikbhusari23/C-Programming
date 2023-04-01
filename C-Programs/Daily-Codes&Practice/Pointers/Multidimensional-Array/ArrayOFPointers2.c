#include<stdio.h>

void main() {

	int x=10;
	char ch='A';
	double d=20.85;

	void* arr[3]={&x,&ch,&d};

	printf("%p\n",arr[0]);
	printf("%p\n",arr[1]);
	printf("%p\n",arr[2]);

	printf("%d\n",*((int*)(arr[0])));
	printf("%c\n",*((char*)(arr[1])));
        printf("%0.2lf\n",*((double*)(arr[2])));



}

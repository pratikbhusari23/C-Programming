#include<stdio.h>

void main() {

	int size ;
	printf("Enter array size : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter Array Elements : \n");

	for(int i=0 ;i<size ;i++) {
		scanf("%d",&arr[i]);
	}
	printf("Array Elements Are :\n ");
	for(int i=0 ;i<size ;i++) {
		printf("Line 1 =%p\n",*arr+i);
		printf("line 2 =%d\n",arr[i]);
		printf("line 3 =%d\n",*(arr+i));
		printf("Line 4 =%p\n",*arr+i);
		 
	}

}

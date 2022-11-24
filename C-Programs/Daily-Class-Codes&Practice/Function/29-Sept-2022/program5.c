#include<stdio.h>

int main() {
	
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
//	printf("size of array =%d\n",sizeof(arr)/sizeof(int));

	int arrsize=sizeof(arr)/sizeof(int);

	for(int i=0 ;i<arrsize ;i++) {
	
		printf("%d\n",*(*arr+i));
	}


}

#include<stdio.h>

int main() {

	int arr[3][3][3]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27};

//	int arrsize=sizeof(arr)/sizeof(int);
//	int arrsize=*(*(&arr+1))-*arr;                      //size=9
	int arrsize=*(*(*(&arr+1)))-(*(*arr));             //size =27
	printf("%d\n",arrsize);

	for(int i=0 ;i<arrsize ;i++){
		printf("%d\n",*(**arr+i));
	
	}

}



#include<stdio.h>

void printArr1(int *ptr,int arrSize) {

	for(int i=0; i<arrSize ;i++){
		printf("%d\n",*(ptr+i));
	
	}
}

/*void printArr2(int arr[],int arrSize) {

	for(int i=0;i<arrSize ;i++) {
		printf("%d\n",arr[i]);          //Same as printArr1 fun() , should not be used as to stand out from rest of the people
	
	}
}
*/
void main() {

	int arr[]={10,20,30,40,50};
	int arrSize=sizeof(arr)/sizeof(int);

	printArr1(arr,arrSize);
	//printArr2(arr,arrSize);



}

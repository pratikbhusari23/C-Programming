#include<stdio.h>

void printElement(int element){
	printf("%d\n",element);

}
void main() {

	int arr[]={10,20,30,40,50};
//	int arrsize=sizeof(arr)/sizeof(int);
	int arrsize=*(&arr+1)-arr;
	printf("%d\n",arrsize);

	for(int i=0 ;i<arrsize ;i++){
		printElement(arr[i]);	
	}
}

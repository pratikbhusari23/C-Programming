#include<stdio.h>


int sumofArray(int *ptr,int sizeofArray){

	int sum=0;

	for(int i=0; i<sizeofArray ;i++) {
	
		printf("%d\n",*(ptr+i));
		sum+=*(ptr+i);
	
	}

	return sum;

}
void main() {

	int arr[]={10,20,30,40,50};

	int sizeofArray=*(&arr+1)-arr;

	int sum=sumofArray(arr,sizeofArray);

	printf("Sum = %d\n",sum);






}

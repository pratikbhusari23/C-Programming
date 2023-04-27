#include<stdio.h>

void main(){
	
	int size,odd=0;

	printf("Enter Array Size : ");
	scanf("%d",&size);

	int arr[size];

	for(int i=0 ; i<size ;i++){

		
		scanf("%d",&arr[i]);
		
		if(arr[i]%2!=0){

			odd+=arr[i];

		}

	}
	printf("%d",odd);
	
}

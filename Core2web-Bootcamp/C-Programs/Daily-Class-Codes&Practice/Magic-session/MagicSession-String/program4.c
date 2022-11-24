/*

wap to take array of no from user and check if the no are even then print square of it and if odd then print cube of it

*/

#include<stdio.h>

void  main() {
	
	int arr[50],x;
	
	printf("Enter Count of numbers : ");
	scanf("%d",&x);
	arr[x];
	printf("Enter numbers : ");
	
	for(int i=0 ; i<x ; i++) {
		scanf("%d",&arr[i]);
	
	}
	printf("\nOutput: \n");
	for(int i=0 ; i<x ; i++){
		if(arr[i]%2==0){
			printf("%d\n",arr[i]*arr[i]);
		
		}
		else {
			printf("%d\n",arr[i]*arr[i]*arr[i]);
		}
	
	}
	printf("\n");
}

#include<stdio.h>
#include<stdlib.h>

void main(){
	
	int num,temp;
	printf("Enter Size of array : ");
	scanf("%d",&num);
	int * arr=(int*)malloc(num*sizeof(int));

	for(int i=0 ; i<num ;i++){
		scanf("%d",&arr[i]);
	
	}
	printf("\n");
	for(int i=0 ; i<num ; i++){
		printf("|%d|",arr[i]);
	}

	for(int i=0 ; i<num/2 ; i++){

		temp=arr[i];
		arr[i]=arr[num-i-1];
		arr[num-i-1]=temp;
	}
	printf("\n");
	for(int i=0 ; i<num ; i++){
		printf("|%d|",arr[i]);
	}
	printf("\n");
}

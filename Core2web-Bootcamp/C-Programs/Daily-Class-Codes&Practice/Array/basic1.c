#include<stdio.h>

void main() {

	int size,p;
        printf("Enter Size of array : ");	
	scanf("%d",&size);

	int arr[size];

	printf("Entered Elements are : \n");

	for(int i=0 ; i<size ;i++) {
		scanf("%d",&arr[i]);
	}
	int search;
	printf("Enter search element : ");
	scanf("%d",&search);
	int flag=0;
	for(int i=0 ;i<size ;i++) {
		if(search==arr[i]) {
			flag=1;
			p=i;
		}
	
	}
	if(flag==1){
		printf("Found at index %d\n",p);
	}
	else {
		printf("Not Found\n");
	}
	
}

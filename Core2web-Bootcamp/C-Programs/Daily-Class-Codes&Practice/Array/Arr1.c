#include<stdio.h>

void main() {
	int iarr[5];

	printf("Enter array Elements : \n");
	
	for(int i=0; i<5 ;i++) {
		scanf("%d",&iarr[i]);
	}

	int sum=0;
	for(int i=0 ;i<5 ;i++) {
	
		sum=sum+iarr[i];
	
	}
	printf("Addition of array elements are %d\n",sum);


}

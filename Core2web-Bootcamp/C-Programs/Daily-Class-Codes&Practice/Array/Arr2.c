#include<stdio.h>

void main() {
	int iarr[5];

	printf("Enter array Elements : \n");
	
	for(int i=0; i<5 ;i++) {
		scanf("%d",&iarr[i]);
	}
	printf("Elements Divisible by 2 are : \n");

	for(int i=0 ;i<5 ;i++) {
		if(iarr[i]%2==0) {
			printf("%d\n",iarr[i]);
		}
	
	
	}
}

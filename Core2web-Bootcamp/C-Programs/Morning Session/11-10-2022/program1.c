/*
 *
 * wap to print the sqaure of odd numbers between a given range from user 
 * input : enter start : 10
 * 	   enter end   : 20
 * output : 121 169 225 289 361
 *
 */

#include<stdio.h>

void main() {
	
	int start,end;
	printf("Enter Start : ");
	scanf("%d",&start);
	printf("Enter End : ");
	scanf("%d",&end);

	for(int i=start ; i<=end ; i++) {
		if(i%2==1) {
			printf("%d ",i*i);

		
		}
	
	}

}

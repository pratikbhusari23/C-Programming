/*

 wap to print the num whose factorial is even. take range from user 

input : start 1
	end   5

Output : 2	3	4	5

*/

#include<stdio.h>

void main() {
	
	int start,end,fact=1;
	printf("Enter start : ");
	scanf("%d",&start);
	printf("Enter end : ");
	scanf("%d",&end);

	for(int i=start ; i<=end ; i++) {
		for(int j=i ; j>=1 ; j--) {
			fact=fact*j;
			
		}
		if(fact%2==0) {
			printf("%d ",i);

		}
	
	}
	printf("\n");

}

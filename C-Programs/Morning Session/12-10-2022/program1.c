/*
wap to print the odd numbers as it is and cube of even numbers between a given range from the user .

input : Enter start 10
	Enter end   20

Output : 1000 11 1728 13 2744 15 4096 18 5832 19 8000

*/

#include<stdio.h>

void main() {

	int start ,end;
	printf("Enter start range : ");
	scanf("%d",&start);
	printf("Enter end range : ");
	scanf("%d",&end);

	for(int i=start ; i<=end ; i++) {
		if(i%2==0) {
			printf("%d ",i*i*i);
		
		}
		else {
			printf("%d ",i);
		}
	
	}
}

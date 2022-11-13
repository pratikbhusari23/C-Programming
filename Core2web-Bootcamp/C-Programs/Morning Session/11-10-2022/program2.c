/*
 *
 	wap to print the numbers divisible by 3 & 7 between a given range from user .start the range from reverse 

input : enter start : 30
	enter end   : 80
ouput : 63 42

*/

#include<stdio.h>

void main() {
	
	int start ,end ;
	printf("Enter start : ");
	scanf("%d",&start);
	printf("Enter end : ");
	scanf("%d",&end);

	for(int i=end ; i>=start ; i--) {
		if(i%7==0 && i%3==0) {
			printf("%d\t",i);
		
		} 
		
	}

}

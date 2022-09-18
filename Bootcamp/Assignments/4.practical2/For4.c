/* Prime no */

#include<stdio.h>

void main() {

	int x;
	int temp=0,i;
	printf("Enter no : ");
	scanf("%d",&x);
	for( i=1 ; i<=x ;i++) {
		if(x%i==0 && x%x==0) {
			temp++ ;
		}
	
	}
	if(temp==2) {
		printf("It is a Prime no");
	}else {
		printf("it is not a Prime no");
	}			
}
	



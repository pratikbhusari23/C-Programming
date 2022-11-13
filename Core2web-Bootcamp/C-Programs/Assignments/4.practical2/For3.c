/* Write a Program  */

#include<stdio.h>
void main() {
	int x;
	int count=0,i;
	int add=0;
	printf("Enter No : ");
	scanf("%d",&x);
	if (x<0) {
	for(i=-1; i>=x; i--){
		if(x%i==0) {
			printf("Divisors Are : %d\n",i);
			add=i+add;
			count++;
		}
	}
	}
	else {
	for(i=1; i<=x; i++){
		if(x%i==0) {
			printf("Divisors Are : %d\n",i);
			add=i+add;
			count++;
		}
	}
	}
	printf("Count of Divisors= %d\n",count);
	printf("addition of Divisors is=%d\n",add);
	
}

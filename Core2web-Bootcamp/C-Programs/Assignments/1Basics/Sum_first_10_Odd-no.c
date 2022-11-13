/* Write a Progaram to Print The sum of First 10 Odd no */
#include<stdio.h>
void main() {
	int x=0;
	int sum=0;
	for(int i=1 ;x<10 ;i++) {
		if(i%2!=0) { 
			printf("%d\n",i);
			sum+=i;
			x++;
		}
	
	}printf("sum = %d",sum);

}

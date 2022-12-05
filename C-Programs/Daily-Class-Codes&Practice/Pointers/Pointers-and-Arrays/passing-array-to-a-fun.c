/* Demonstration by call by value */

#include<stdio.h>

void display(int a){
	
	printf("%d\n",a);
}


void main() {

	int i;
	int marks[]={10,20,30,40,50};
	for(int i=0 ; i<5 ; i++)
		display(marks[i]);
}

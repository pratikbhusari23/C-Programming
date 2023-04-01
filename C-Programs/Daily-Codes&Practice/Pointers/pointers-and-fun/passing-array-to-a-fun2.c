/* Call by reference */

#include<stdio.h>

void display(int *n){
	
	printf("%d\n",*n);

}

void main() {

	int marks[]={10,20,30,40,50};

	for(int i=0 ; i<5 ;i++){
		display(&marks[i]);
	
	}

	



}

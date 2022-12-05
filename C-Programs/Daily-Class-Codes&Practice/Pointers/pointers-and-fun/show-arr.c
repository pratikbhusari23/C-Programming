#include<stdio.h>

int show(int **n){

	printf("%d\n",**n);
}
void display(int *n){

	show(&n);

}

void main(){
	
	int marks[]={10,20,30,40,50};

	for(int i=0 ; i<5 ; i++){

		display(&marks[i]);
	
	}

}

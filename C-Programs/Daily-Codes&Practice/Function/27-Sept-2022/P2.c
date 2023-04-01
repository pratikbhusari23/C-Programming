#include<stdio.h>

void fun(int ***y){
	printf("%d",***y);
}

void main(){

	int arr[]={10,20,30,40};

	int *iptr1=arr;
	int **iptr2=&iptr1;
	int ***iptr3=&iptr2;
	fun(iptr3);
	printf("\nEnd Main\n");

}

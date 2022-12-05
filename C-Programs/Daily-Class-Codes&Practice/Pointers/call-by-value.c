#include<stdio.h>


void swapvar(int x, int y){
	
	int temp;

	temp=x;
	x=y;
	y=temp;

	printf("\tx=%d\n",x);
	printf("\ty=%d\n",y);

}


void main(){

	int a=10 , b=20;

	printf("a=%d\n",a);
	printf("b=%d\n",b);
	swapvar(a,b);
	printf("a=%d\n",a);
	printf("b=%d\n",b);


}

/* Write a Program to Print the addition of 1 to 10 with 10 to 1  */

#include<stdio.h>

void main() {
	int x;
	int y=10;
	for(int x=1; x<=10; x++) {
		printf("%d+ %d= %d\n",x,y,x+y);
		y--;
	}
}

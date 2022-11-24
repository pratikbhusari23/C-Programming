/* Write a Program to print the character whose ascii is even */

#include<stdio.h>

void main() {
	
	for(int i=0 ;i<128 ;i++) {
		if(i%2==0) {
			printf("%c=%d\n",i,i);
		}
	
	}

}

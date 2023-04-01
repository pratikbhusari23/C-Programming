/*
 * wap to find whether the given input character is an alphabet , a digit or a special character .

Input : *
Output : * is a Special character .

*/
#include<stdio.h>

void  main() {
	
	char a;
	printf("Enter input \n");
	scanf(" %c",&a);

	if(a>=48 && a<=57) {
		printf("%c is a Digit \n",a);
	
	}
	else if(a>=65 && a<=90 || a>=97 && a<=122) {
		printf("%c is an alpahbet.\n",a);
	
	}
	else {
		printf("%c is a Special Characer \n",a);
	}
	
}


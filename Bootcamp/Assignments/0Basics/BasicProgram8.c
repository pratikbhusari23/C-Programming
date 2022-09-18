/* write a program , take a character and print whether it is in UPPERCASE or LOWERCASE */

#include<stdio.h>
void main() {
	char c;
	printf("Enter character : ");
	scanf("%c",&c);

	if(c>='A' && c<='Z') {
		printf("%c is a UPPERCASE \n",c);
	}else if(c>='a' && c<='z') {
		printf("%c is a lowercase\n",c);
	}else {
		printf("%c is a Special Character\n",c);
	}
}

#include<stdio.h>

void main() {
	char s[100];

	printf("Enter String : ");
	scanf("%[^\n]%*c", s);

	printf("Hello, World!\n");
	printf("%s\n", s);

}

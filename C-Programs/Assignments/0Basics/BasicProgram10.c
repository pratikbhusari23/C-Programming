/* Write a Program to Check if a character is a vowel or a Consonant. Take all the values from the user*/

#include<stdio.h>

void main() {
	char c;
	printf("Enter Character : ");
	scanf("%c",&c);
	switch(c) {
		case 'A' :
			printf("%c is a Vowel\n",c);
			break;
		case 'E' :
			printf("%c is a Vowel\n",c);
			break;
		case 'I' :
			printf("%c is a Vowel\n",c);
			break;
		case 'O' :
			printf("%c is a Vowel\n",c);
			break;
		case 'U' :
			printf("%c is a Vowel\n",c);
			break;
		case 'a' :
			printf("%c is a Vowel\n",c);
			break;
		case 'e' :
			printf("%c is a Vowel\n",c);
			break;
		case 'i' :
			printf("%c is a Vowel\n",c);
			break;
		case 'o' :
			printf("%c is a Vowel\n",c);
			break;
		case 'u' :
			printf("%c is a Vowel\n",c);
			break;
		default :
			printf("%c is a Consonant \n",c);
			break;
		}
}

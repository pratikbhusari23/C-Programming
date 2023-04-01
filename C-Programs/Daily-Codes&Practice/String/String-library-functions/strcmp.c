#include<stdio.h>
#include<string.h>

void main() {

//	char *str1 = "Virat Kohli";
//	char *str2 = "Virat Kohli";

	char str1[20];
	char str2[20];

	printf("Enter First String : ");
	gets(str1);
	printf("Enter Second String : ");
	gets(str2);

//	puts(str1);
//	puts(str2);


	int diff = strcmp(str1,str2);

	if(diff==0){
		printf("Strings are equal\n");
	
	}
	else 
		printf("Strings are not equal\n");

}

#include<stdio.h>

char mystrcat(char *str1,char *str2) {
	while(*str1 != '\0'){
		str1++;
	}
	while(*str2!='\0'){	
		*str1=*str2;
		str1++;
		str2++;
	
	}
	*str1='\0';
}

void main() {
	
	char arr1[30],arr2[30];
	printf("Enter both string : ");
	gets(arr1);
	gets(arr2);
	mystrcat(arr1,arr2);
	puts(arr1);

}


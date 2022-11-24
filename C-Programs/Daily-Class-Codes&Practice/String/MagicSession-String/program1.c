/*
Q.1 Wap that accepts a String from the user and prints the length of the string.Use mystrlen() 

	input : "My mom always said life is like a box of chocoloate.You never know what you're going to get." - Movie forrest Gump

	output : The length of entered string is ....
*/
#include<stdio.h>

int mystrlen(char * arr) {

	int count=0;
	while(*arr !='\0'){
		count++;
		arr++;
	}
	
	return count;
}

void main() {

	char arr[200];
       	printf("Enter String : ");
	gets(arr);	
	printf("The length of the string is %d: ",mystrlen(arr));
	printf("\n");

}

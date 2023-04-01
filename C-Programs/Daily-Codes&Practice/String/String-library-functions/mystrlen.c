#include<stdio.h>
#include<string.h>

int count=0;
int mystrlen(char *str){

	while(*str !='\0'){
		
		count++;
		str++;
	
	}
	return count;

}

void main() {

	char *str="Virat Kohli";
	mystrlen(str);
	printf("%d\n",count);

}

#include<stdio.h>
#include<string.h>

void main(){

	char name[10]={'K','L',' ','R','a','h','u','l','\0'};
	char *str="Virat Kohli";

	int LenName=strlen(name);
	int lenstr=strlen(str);

	printf("%d\n",LenName);
	printf("%d\n",lenstr);

}


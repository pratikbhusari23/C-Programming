#include<stdio.h>
#include<string.h>

void main(){

	char *str1 ="Hardik Pandya";
	char str2[20];
		
	printf("%s\n",str1);
	printf("%s\n",str2);
	//puts(str1);
	//puts(str2);

	strcpy(str2,str1);

	printf("str1 = %s\n",str1);
	printf("str2 = %s\n",str2);

}

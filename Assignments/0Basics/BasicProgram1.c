#include<stdio.h>
/* Wriet a Program to print the value and size of the below variables.Take all the Values From the User
 
*/
	void main() {
	int w;
	char x;
	float y;
	long double z;
	printf("Enter Value : \n");
	scanf("%d",&w);
	printf("Enter Value : \n");
	scanf(" %c",&x);
	printf("Enter Value : \n");
	scanf("%f",&y);
	printf("Enter Value : \n");
	scanf("%Lf",&z);
	
	printf("Value Entered is %d\n",w);
	printf("Value Entered is %c\n",x);
	printf("Value Entered is %f\n",y);
	printf("Value Entered is %Lf\n",z);

	printf("Integer Size is %ld \n",sizeof(w));
	printf("Char size is %ld\n",sizeof(x));
	printf("Float size is %ld\n",sizeof(y));
	printf("long double size is %ld\n",sizeof(z));
	
	
	
	
	
	
}

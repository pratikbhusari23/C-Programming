/*
 
A
C B A
E D C B A
C B A
A

*/

#include<stdio.h>

void main() {

	int x,z;
	char y ='A';
	printf("Enter no of Rows : ");
	scanf("%d",&x);
	z=y;
	for(int i=1 ; i<=x ;i++) {
		for(int j=1 ; j<=i ;j++) {
			printf("%c\t",z);
			z--;	
		}

		printf("\n");
		z=y+i+1;
	}
}


/*
A
B       A
B       A       @
A       @       ?       >
?       >       =       <       ;
*/



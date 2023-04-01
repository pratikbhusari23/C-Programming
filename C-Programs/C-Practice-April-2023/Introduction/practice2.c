#include<stdio.h>

void main(){

	printf("pratik\c pratik\n");
	printf("pratik\d pratik");
}
/*
 
practice2.c: In function ‘main’:
practice2.c:5:9: warning: unknown escape sequence: '\c'
    5 |  printf("pratik\c pratik\n");
          |         ^~~~~~~~~~~~~~~~~~~
	  practice2.c:6:9: warning: unknown escape sequence: '\d'
	      6 |  printf("pratik\d pratik");
	            |         ^~~~~~~~~~~~~~~~~

*/

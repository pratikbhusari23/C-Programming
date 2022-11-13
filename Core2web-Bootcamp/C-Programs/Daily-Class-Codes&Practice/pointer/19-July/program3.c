#include<stdio.h>

void main() {

	int arr1[]={10,20,30,40,50};
	int arr2[]={60,70,80,90,100};

/*	int *ptr1 = arr1 + 1;
	int *ptr2 = arr1 + 2;
*/
	int *ptr1=*arr1 +1 ;
	int *ptr2=*arr1 +2;

	printf("%d\n",ptr1);
	printf("%d\n",ptr2);
/*	printf("%d\n",*ptr1);
	printf("%d\n",*ptr2);
	printf("%p\n",*ptr1);
	printf("%p\n",*ptr2);
	printf("%p\n",ptr1);
	printf("%p\n",ptr2);

*/
	


}

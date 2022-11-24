#include<stdio.h>

void main() {
	
	int arr1[3]={10,20,30};
	int arr2[3]={40,50,60};

//	int* iparr[2]={*(&arr1),*(&arr2)};
//	printf("%d\n",*(int*)((iparr[0]))); //10
//	printf("%d\n",*(int*)(iparr[1])); //40

	int* iparr[2][3]={*(&arr1),*(&arr2)};

	printf("%d\n",*(*(*iparr+0))); //10
	printf("%d\n",*(*(*iparr+0)+1)); //20
	printf("%d\n",*(*(*iparr+0)+2)); //30
	printf("%d\n",*(*(*iparr+1))); //40
	printf("%d\n",*(*(*iparr+1)+1)); //50
	printf("%d\n",*(*(*iparr+1)+2)); //60
	
	
/*	int ***iparr[][3]={(&arr1),(&arr2)};

	printf("%d\n",*(*(*iparr)+0));
*/
	}

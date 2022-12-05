#include<stdio.h>

int * fun(){
	
	static int i=10;
	return (&i);
}

int main() {
	
	int *p;

	p=fun();

	printf("%p\n",p);
	printf("%d\n",*p);

}





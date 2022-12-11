#include<stdio.h>
#include<stdlib.h>

void main(){

	int n=0 , n1=1, num,nextterm=n+n1;
	
	printf("Enter The no of terms : ");
	scanf("%d",&num);

	printf("%d %d ",n,n1);

	for(int i=2 ; i<num ; i++){
		printf(" %d ",nextterm);
		n=n1;
		n1=nextterm;
		nextterm=n+n1;
	}
	printf("\n");
}

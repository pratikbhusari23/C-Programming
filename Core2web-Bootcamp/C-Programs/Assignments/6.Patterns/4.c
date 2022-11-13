#include<stdio.h>


void main() {

	
	int rows ,cols;
	char ch='A';

	printf("Enter no of rows : ");	
        scanf("%d",&rows);
        printf("Enter no of cols : ");	
        scanf("%d",&cols);
	ch=ch+(rows*cols)-1;

	for(int i=1 ;i<=rows ;i++) {

		for(int j=1 ;j<=cols ;j++){
			printf("%c ",ch);
			ch--;
		}
		printf("\n");
	
	}

}

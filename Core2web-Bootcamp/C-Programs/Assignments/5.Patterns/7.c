#include<stdio.h>

void main() {

	int rows ,cols ,x=1;

	printf("Enter no of rows : ");
	scanf("%d",&rows);
	printf("Enter no of cols : ");
	scanf("%d",&cols);

	for(int i=1 ;i<=rows ;i++) {
		for(int j=1 ;j<=cols ;j++) {
			if(j%2==0) {
				printf("%d\t",x);
				
			}
			else {
				printf("%d\t",x*x);
			
			}
			x++;
		}

		printf("\n");
	}

}

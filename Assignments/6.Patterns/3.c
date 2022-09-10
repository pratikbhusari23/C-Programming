
#include<stdio.h>

void  main() {


	int rows ,cols;

	printf("Enter no of rows : ");	
        scanf("%d",&rows);
        printf("Enter no of cols : ");	
        scanf("%d",&cols);
	
	for(int i=rows ;i>=1 ;i--) {
		for(int j=1 ;j<=cols ;j++) {
			printf("%d ",i);
		
		}
		printf("\n");	
	}

} 

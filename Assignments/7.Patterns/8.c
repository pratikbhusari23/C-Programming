#include<stdio.h>

void main() {
	

	int rows,cols;

	printf("Enter no of rows : ");
	scanf("%d",&rows);
	printf("Enter no of cols : ");
	scanf("%d",&cols);

	int x=rows*cols;
	int y=rows*cols;
	
	for(int i=1 ;i<=rows ;i++) {
	
		for(int j=1 ;j<=cols ;j++) {
			if(i%2==1) {
				printf("%d\t",x);
				x--;
			}
			else if(i%2==0){
				printf("%c\t",y+62);
				y--;
			}

		
		}
		x=x-2;
		y=y-2;
		printf("\n");
	
	}


}

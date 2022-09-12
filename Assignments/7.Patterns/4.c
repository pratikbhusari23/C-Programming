#include<stdio.h>

void main(){

	int rows,cols,x=1,y=1;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	printf("Enter no of cols : ");
	scanf("%d",&cols);

	for(int i=1 ;i<=rows ;i++) {
		for(int j=1 ;j<=cols ;j++) {				
			if(j%2==0){
				printf("%c ",x+65);
				x+=2;	
			}
			else {
				printf("%c ",y+96);
				y+=2;
			}		
		}

		x=i+1;
		y=i+1;
		printf("\n");
	}
}

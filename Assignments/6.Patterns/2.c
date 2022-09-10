#include<stdio.h>

void main(){

	int rows ,cols,x,ch;
		
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	printf("Enter no of Columns : ");
	scanf("%d",&cols);   

	for(int i=1 ;i<=rows ;i++) {
		ch='c';
		x=3;

		for(int j=1 ;j<=cols ;j++) {
			if(i%2==0){
				printf("%c ",ch);
				ch--;		
			}else {
				printf("%d ",x);
				x--;	
			}	
		}
		printf("\n");	
	}
}

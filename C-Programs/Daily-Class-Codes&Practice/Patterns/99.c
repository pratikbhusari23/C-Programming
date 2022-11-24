#include<stdio.h>

void main() {

	
	int rows,cols;

	printf("Enter no of rows : ");
	scanf("%d",&rows);
	printf("Enter no of cols : ");
	scanf("%d",&cols);
	int x=rows;
	int y=rows+1;
	int c=1;
	int d=6;
	for(int i=1 ;i<=rows ;i++) {
		for(int j=1 ;j<=cols ;j++) {
			if(i%2!=0){
				printf("%c%d\t",x+64,c);
				x--;
				c++;
			}
			else if(i%2==0) {
				printf("%c%d\t",y+96,d);
				y++;
				d--;
			}
		}
		x=rows+i;
		y=rows+i;
		c=c-1;
		d=c+1;;
		printf("\n");
	}
}

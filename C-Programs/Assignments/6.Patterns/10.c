#include<stdio.h>

void main() {

	int rows,cols,p;
	char x,y;

	printf("Enter no of Rows : ");
	scanf("%d",&rows);
	printf("Enter no of cols : ");
	scanf("%d",&cols);

	for(int i=1 ;i<=rows ;i++) {
		x='D';
		y='A';
		p=1;
		for(int j=cols ;j>=1 ;j--) {
			if(i%2!=0) {
				printf("%c%d\t",x,j);
				x--;
			}
			else {
				printf("%c%d\t",y,p);
				y++;
				p++;
			
			}
			
		}

		printf("\n");
	}
}

		

#include<stdio.h>

void main() {
	
	
	int rows,cols;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	printf("Enter no of Cols : ");
	scanf("%d",&cols);

	for(int i=1 ;i<=4 ;i++){
		int p=4,q=1;
		for(int j=1 ;j<=4 ;j++) {
			if(j==1) {
				printf("%d\t",p);
			}
			else if(j==2) {
				printf("%c\t",q+96);
			
			}
			else if(j==3) {
				printf("%d\t",j);
			
			}
			else if(j==4) {
				printf("%c\t",p/2+96);
			}
		
		
		}
		printf("\n");
	
	
	}
}

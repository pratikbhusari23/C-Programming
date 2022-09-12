#include<stdio.h>

void main(){

	int row,coloum;
	scanf("%d",&row);
	scanf("%d",&coloum);

	for(int i=0;i<coloum;i++){
		int k=0,m=0;
		for(int j=0;j<row;j++){
			if(j%2==0) {
				printf("%d",row-m);
				m++;

			}
			else {
			
				int ch=97+k;
				printf("%c",ch);
				k++;
		
			}

		}
		printf("\n");
	}
}

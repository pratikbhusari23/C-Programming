#include<stdio.h>

void main() {

	int num1=1,rows,num2=97;

	printf("Enter no of rows");
	scanf("%d",&rows);

	for(int i=1 ;i<=rows;i++){
		for(int j=1 ;j<=rows ;j++){
			if(i%2==0){
				printf("%c",num2);
				num2++;
			}
			else {
				printf("%d",num1);
				num1++;
			}

		}
		printf("\n");
	
	}


}

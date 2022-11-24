/*

1	3	5	7	9
	9	7	5	3
		3	5	7
			7	5
				5
rows = 5

*/

#include<stdio.h>

void main() {

	int rows,num=1;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=1 ; i<=rows ; i++) {
		for(int j=1 ; j<=rows ; j++) {
			if(j<i) {
				printf("\t");
			}
			else {
				if(i%2==0) {
					num-=2;
					printf("%d\t",num);
					
			
				}
				else {
					printf("%d\t",num);
					num+=2;
				}
		
			}
		}
		printf("\n");

	}

}


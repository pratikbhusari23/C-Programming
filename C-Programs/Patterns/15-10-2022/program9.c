/*
 
				4
			3	6
		2	4	6
	1	2	3	4
*/
			       	
#include<stdio.h>

void main() {
	
	int rows,num;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=1 ; i<=rows ; i++) {
		num=1;
		for(int j=1 ; j<=rows ; j++) {
		
			if(j<=rows-i) {
				printf("\t");
				num++;
			}
			else {
				if(i%4==1) {
					printf("%d\t",num);
					num+=4;
				}
				if(i%4==2) {
					printf("%d\t",num);
					num+=3;


				}
				if(i%4==3) {
					printf("%d\t",num);
					num+=2;


				}				
				if(i%4==0) {
					printf("%d\t",num);
					num+=1;

				}
			}
		}
		printf("\n");
	}
}

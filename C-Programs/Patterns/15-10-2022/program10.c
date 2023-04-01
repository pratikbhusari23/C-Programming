/*
 
1
4	9
64	125	216
2401	4096	6561	10000

Space Added

			1
		4	9
	64	125	216
2401	4096	6561	10000

*/
/*
#include<stdio.h>

void main() {
	
	int rows,num=1;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=1 ; i<=rows ;i++) {
		for(int j=1 ; j<=i ; j++) {
			if(i%4==1) {
				printf("%d\t",num);
				num++;
			}
			if(i%4==2) {
				printf("%d\t",num*num);
				num++;
			}
			if(i%4==3) {
				printf("%d\t",num*num*num);
				num++;
			}
			if(i%4==0) {
				printf("%d\t",num*num*num*num);
				num++;
			}
		
		
		}
		printf("\n");
	}
}

*/

#include<stdio.h>

void main() {
	
	int rows,num=1;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=1 ; i<=rows ;i++) {
		for(int j=1 ; j<=rows ; j++) {
			if(j<=rows-i) {
				printf("\t");
			}
			else{
				if(i%4==1) {
					printf("%d\t",num);
					num++;
				}
				if(i%4==2) {
					printf("%d\t",num*num);
					num++;
				}
				if(i%4==3) {
					printf("%d\t",num*num*num);
					num++;
				}
				if(i%4==0) {
					printf("%d\t",num*num*num*num);
					num++;
				}
		
		
			}
		}
		printf("\n");
	}
}

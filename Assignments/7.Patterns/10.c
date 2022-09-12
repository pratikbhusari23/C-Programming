
#include<stdio.h>
void main() {
	int rows,cols,num=1;
	char ch='E';
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	printf("Enter no of cols : ");
	scanf("%d",&cols);
	
	for(int i=1 ;i<=rows ;i++) {
		if(i%2!=0) {
			ch='C';
			ch+=i;
			for(int j=1 ;j<=cols ;j++) {
				printf("%c%d\t",ch,num);
				ch--;
				num++;
			
				}
		
		}else {
			ch='c';
			ch+=i;
			for(int j=1 ;j<=cols ;j++) {
				printf("%c%d\t",ch,num);
				ch++;
				num--;	
			}
			num+=2;
		
		}
		printf("\n");
		
	}
}



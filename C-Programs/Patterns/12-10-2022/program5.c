#include<stdio.h>

void  main() {
	
	int x,y=1;
	printf("Enter no of rows : ");
	scanf("%d",&x);
	
	for(int i=1 ;i<=x ; i++){
		for(int j=1 ; j<=x ;j++){
			if(j%2==0){
				printf("%c\t",y+64);
			}	
			else {
				printf("%c\t",y+96);
			}
			y++;
		}
		
		printf("\n");
	
	}
}

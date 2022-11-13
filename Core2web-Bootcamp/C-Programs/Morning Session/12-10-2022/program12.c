/*
 
  1 2 3 4 
  a b c d 
  #  # # #
  5 6 7 8
  e f g h 
  # # # #

  */


#include<stdio.h>

void  main() {

	int x,y=1,z=1,i;

	printf("Enter no of rows : ");
	scanf("%d",&x);

	for (int i=1 ; i<=x ; i++) {
		
		for(int j=1 ; j<=4 ; j++) {
			if(i%3==1) {
				printf("%d\t",y);
				y++;
			}
			else if(i%3==2) {
				printf("%c\t",z+96); 
				z++;
			
			}
			else if(i%3==0){
				printf("#\t");
			}
			
		
		}
		printf("\n");
	
	}
}

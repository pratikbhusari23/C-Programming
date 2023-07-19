/*
 *	1
 *	3 * 2
 *	4 * 5 * 6
 *	10 * 9 * 8 * 7
 *	11 * 12 * 13 * 14 * 15
 *
 *
 *
 */

#include<stdio.h>

void main(){
	
	int i , j , n , count=0,k=0;

	printf("Enter N");
	scanf("%d",&n);

	for(int i=1 ; i<=n ; i++){
		
		count=k;

		for(int j=1 ; j<=i ; j++){
			
			if(i%2==0){
				
				printf("%d",count+i);
				count = count-1;
				
				if(j!=i){
					
					printf("*");
				}
			}
			else {
					
					count = count+1;
					printf("%d",count);
					
					if(j!=i)
						printf("*");
						k++;
					
			}


		}
		printf("\n");
	}
}

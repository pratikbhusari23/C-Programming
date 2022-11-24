/*
 *
 * Q.2  input : 9403471720
 * 	output  0 0 1 2 3 4 4 7 7 9
 * 	
 * 	*/

#include<stdio.h>

void main() {
	
	int n,temp,len=0,i=0,no[50],rem;
	printf("Enter no : ");
	scanf("%d",&n);
	
	while(n!=0) {
		rem=n%10;
		no[i]=rem;
		i++;
		n/=10;
		len++;
	}
	
	for(int i=0 ; i<len-1 ; i++) {
		for(int j=0 ; j<len-1 ; j++) {
			if(no[j]> no[j+1]) {

				temp=no[j];
				no[j]=no[j+1];
				no[j+1]=temp;
				
				}
			
		}
		
	}
	printf("\nOutput: \n");

	for(int i=0 ; i<len ; i++){
		printf("%d\t",no[i]);
	
	}
	printf("\n");
		
}


#include<stdio.h>

void main(){
	
	int size;

	printf("Enter size of array : ");
	
	scanf("%d",&size);

	int arr[size];

	for(int i=0 ; i<size ; i++){
		
		scanf("%d",&arr[i]);
	}
	
	int count=0;
	for(int i=0 ; i<size ; i++){
		for(int j=1 ; j<arr[i] ;j++){

			if(arr[i]%j==0){
				
				count++;
			}		
		}

		if(count==2 || arr[i]==2){
			
			printf("Prime no present is : %d",arr[i]);
		}

	}

}

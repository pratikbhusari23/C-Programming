#include<stdio.h>

void range(int arr[],int size , int key,int *rangearr){

	int start =0,store1=-1,store2=-1;
	int end=size-1;


	while(start<=end){
		
		int mid=(start+end)/2;

			printf("arr[mid]=%d\n",arr[mid]);
			printf("index = %d\n",mid);
		

		if(arr[mid]==key){
			printf("key found");

			if(arr[mid]==arr[mid-1]){

				store1=mid-1;
				store2=mid;
				rangearr[0]=store1;
				rangearr[1]=store2;
				printf("In mid=mid-1");
				return ;
				
			}
			else if(arr[mid]==arr[mid+1]){

				store1=mid;
				store2=mid+1;
				rangearr[0]=store1;
				rangearr[1]=store2;
				printf("In mid=mid+1");
				return ;

			}
			else {

				store1=-1;
				store2=-1;
				rangearr[0]=store1;
				rangearr[1]=store2;	
				printf("in else");
				return ;
			}
		
		}else if(arr[mid]>key){

			end=mid-1;
		}
		else if(arr[mid]<key){

			start=mid+1;
			printf("mid<key");
	
		}
	

	}

	rangearr[0]=store1;
	rangearr[1]=store2;
}

void main(){
	
	int size , key;
	printf("Enter Size");
	scanf("%d",&size);
	int arr[size];
	for(int i=0 ; i<size ; i++){

		scanf("%d",&arr[i]);
	}
	printf("Enter key to search");
	scanf("%d",&key);

	int rangearr[2];
	range(arr,size ,key,rangearr);

	if(rangearr[0]==-1){
		printf("arr[%d,%d]",rangearr[0],rangearr[1]);

	}
	else
		printf("The key is found between indices %d and %d\n", rangearr[0], rangearr[1]);

}

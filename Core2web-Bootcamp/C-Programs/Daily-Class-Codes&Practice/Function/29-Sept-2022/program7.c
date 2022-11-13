#include<stdio.h>

int sumofArray(int arr[3][3],int rows,int cols) {
	int sum=0;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols ;j++){
			if(i==j){
				printf("%d\n",arr[i][j]);
				sum+=arr[i][j];
		
			}
	
		}


	}
	return sum;
}


int sumofArray2(int (*arr)[] ,int sizeofArray) {

	int sum1=0;

	for(int i=0 ;i<sizeofArray ;i++){
//		if(i%4==0){
//			printf("sum of diagonal = %d\n",*(*arr+i));
//			sum1+=*(*arr+i);
		
			printf("sum of diagonal = %d\n",*(*arr+i));
	
			printf("sum of diagonal = %d\n",arr[i]);
	}
	return sum1;
}

void main() {

	int arr[3][3]={1,2,3,4,5,6,7,8,9};

	int rows=3,cols=3,sizeofArray=9;

	int sum=sumofArray(arr,rows,cols);
	int sum1=sumofArray2(arr,sizeofArray);
	printf("sum=%d\n",sum);
	printf("sum1=%d\n",sum1);

}

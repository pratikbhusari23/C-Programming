#include<stdio.h>
#include<stdlib.h>

void main(){

    int row=3,col=4;

    int*arr=(int*)malloc(row*col*sizeof(int));

    for (int i = 0; i < row; i++){
        for(int j=0 ;j<col ;j++){
        
            printf("Enter integer : ");
            scanf("%d",*(*(arr+i)+j)); 
        }
    }
    for (int i = 0; i < row; i++){
        for(int j=0 ; j<col;j++){
        
            printf("%d\n",*(*(arr+i)+j));
        }
    }

    free(arr);
    
}
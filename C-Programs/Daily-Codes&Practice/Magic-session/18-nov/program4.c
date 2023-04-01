#include<stdio.h>
#include<stdlib.h>

void main(){

    int rows,cols,plane;

    printf("Enter no of planes : ");
    scanf("%d",&plane);

    printf("Enter no of rows : ");
    scanf("%d",&rows);

    printf("Enter no of cols : ");
    scanf("%d",&cols);

    int*arr=(int*)malloc(rows*plane*cols*sizeof(int));

    printf("Enter Elements : \n");
    for (int i=0;i<plane*rows*cols;i++){
        scanf("%d",arr+i);
    }
    for (int i=0;i<plane*rows*cols;i++){
        printf("%d\n",*(arr+i));
    }
      
    free(arr);
    
}
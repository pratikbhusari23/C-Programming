#include<stdio.h>
#include<stdlib.h>
void main(){
    int row = 4;
    int col = 3;
    int **ptr =(int**)malloc(row*sizeof(int*));
    for(int i=0;i<row;i++){
        ptr[i]=(int*)malloc(col*sizeof(int));
    }
    for (int i=0; i<row;i++){
        free(ptr[i]);
    }
    free(ptr);
}
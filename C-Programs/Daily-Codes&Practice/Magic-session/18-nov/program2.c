#include<stdio.h>
#include<stdlib.h>

void main(){

    int subject;

    printf("Enter no of Subjects : ");
    scanf("%d",&subject);

    int *arr=(int*)malloc(subject*sizeof(int));

    for (int i = 0; i < subject; i++){
        
        printf("Enter marks per Subject : ");
        scanf("%d",&arr[i]); //arr+i

    }
    for (int i = 0; i < subject; i++){
        
        printf("%d\n",arr[i]);
    }

    free(arr);
    
}
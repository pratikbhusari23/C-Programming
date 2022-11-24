#include<stdio.h>
#include<stdlib.h>

void main(){

    int rows,cols,plane;

    printf("Enter no of rows : ");
    scanf("%d",&rows);

    printf("Enter no of cols : ");
    scanf("%d",&cols);

    int*arr=(int*)malloc(rows*cols*sizeof(int));

    printf("Enter Elements : \n");
    for (int i=0;i<rows*cols;i++){
        scanf("%d",arr+i);
    }
    printf("Elements Entered by you are : \n");
    for(int i=0;i<rows*cols;i++){
        printf("%d\n",*(arr+i));
    }
      
    free(arr);
    
}















// #include<stdio.h>
// #include<stdlib.h>

// void main(){

//     int rows,cols;
//     printf("Enter no of rows : ");
//     scanf("%d",&rows);

//     printf("Enter no of cols : ");
//     scanf("%d",&cols);

//     int**arr=(int**)malloc(rows*sizeof(int*));

//     printf("Enter Elements : \n");
//     for (int i=0;i<rows;i++){
//         arr[i]=(int*)malloc(cols*sizeof(int));
//         for(int j=0;j<cols;j++){
            
//             scanf("%d",*(arr+i)+j); 
//         }
//     }
//     printf("Entered Elements are : ");
//     for (int i = 0; i < rows; i++){
//         for(int j=0 ; j<cols;j++){
        
//             printf("%d\n",*(*(arr+i)+j));
//         }
//     }

//     free(arr);
    
// }
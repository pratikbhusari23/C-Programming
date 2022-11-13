#include<stdio.h>

struct OTT{
    
    int accounts;
    float price;
    char pName[20];
};

void main() {

    struct OTT obj1={4,899.99,"Netflix"};
    struct OTT obj2;

    printf("Enter no of accounts : ");
    scanf("%d",&obj2.accounts);
    printf("Enter Price : ");
    scanf("%f",&obj2.price);
    printf("Enter Platform Name : \n");
    gets(obj2.pName);    //error
    
    //printf("%s\n",obj1.pName);
    printf("%s\n",obj2.pName);


}

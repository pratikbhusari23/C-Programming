#include<stdio.h>

void main(){

    int a=0,b=1,c=a+b,n;

    printf("Enter The No of Terms ?");
    scanf("%d",&n);

    printf("Fibonnaci series : %d ,%d ,",a,b);

    for(int i=3 ; i<n ;i++){

        printf("%d ,",c);
        a=b;
        b=c;
        c=a+b;

    }

    printf("%d ",c);
}
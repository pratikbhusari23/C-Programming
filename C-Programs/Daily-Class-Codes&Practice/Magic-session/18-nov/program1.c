#include<stdio.h>

int fun(int);
void main(){

    int s;
    s=fun(25);
    printf("%d\n",s);
}

int fun(int s){

    return(s>20?9:20);
}
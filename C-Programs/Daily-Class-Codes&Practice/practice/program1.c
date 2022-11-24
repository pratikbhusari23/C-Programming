#include<stdio.h>
#include<stdlib.h>

struct node{

    int x;
    struct node *next;

};
void main(){

 //   int *ptr = (int*)malloc(sizeof(struct node));
    printf("%ld\n",sizeof(struct node));
}
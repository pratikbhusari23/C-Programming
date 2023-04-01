#include<stdio.h>
#include<stdlib.h>

struct node{

    int x;
    struct node *next;

};

struct node2{
    struct node n;
    int y;
};

void main(){


    printf("%ld\n",sizeof(struct node));
    printf("%ld\n",sizeof(struct node2));
}
#include<stdio.h>

struct Demo{

    int x:4;
    int y:8;
};

void main() {

    struct Demo obj = {12,10};
    printf("%d\n",obj.x);
    printf("%d\n",obj.y);
    printf("%ld\n",sizeof(struct Demo));

}

/*

-4
10
4

*/

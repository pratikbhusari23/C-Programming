#include<stdio.h>

struct Demo{

    int x;
    int a;
    int b;
    int c;
    float y;
};

void main() {

    struct Demo obj={1,20,3,4,45.55};
    int arr[]={10,20,30,40,50};

    printf("%p\n",&arr[0]);
    printf("%p\n",arr);

    printf("%p\n",&obj.x);
    printf("%p\n",obj);
    printf("%d\n",sizeof(obj));
    printf("%d\n",sizeof(obj.x));
    printf("%p\n",&obj);

}
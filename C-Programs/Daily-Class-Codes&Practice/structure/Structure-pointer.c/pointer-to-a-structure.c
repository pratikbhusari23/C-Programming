#include<stdio.h>

struct Movie{

    char Mname[20];
    int Count;
    float price;

}obj1={"Tumbad",5,1000.98};

void main() {

    struct Movie * sptr = &obj1;
    printf("%s\n",obj1.Mname);
    printf("%d\n",(*sptr).Count);
    printf("%f\n",(*sptr).price);

}
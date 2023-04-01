#include<stdio.h>

struct Employee
{
    int empid;
    char empname[20];
    float empsal;
};

void main() {

    struct Employee obj1={14700,"Jeevan",9550};
    printf("%d\n",obj1.empid);
    printf("%s\n",obj1.empname);
    printf("%f\n",obj1.empsal);

}

/*

14700
Jeevan
9550.000000

*/
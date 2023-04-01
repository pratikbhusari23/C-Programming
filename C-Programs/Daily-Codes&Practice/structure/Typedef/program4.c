
#include<stdio.h>

typedef struct Employee {

    int empid;
    char empname[20];
    float empsal;
}emp;

void main() {

    emp obj1={1,"virat",50.60};
    printf("%d\n",obj1.empid);
}


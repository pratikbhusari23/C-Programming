#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct IPL{

    char sName[20];
    int TotalTeams;
    double prize;
};

void main() {

    struct IPL *ptr=(struct IPL*)malloc(sizeof(struct IPL));
    
    strcpy((*ptr).sName,"Tata");
    ptr->TotalTeams=8;
    (*ptr).prize=10.00;

    printf("%s\n",(*ptr).sName);
    printf("%d\n",(*ptr).TotalTeams);
    printf("%lf\n",(*ptr).prize);
    

}

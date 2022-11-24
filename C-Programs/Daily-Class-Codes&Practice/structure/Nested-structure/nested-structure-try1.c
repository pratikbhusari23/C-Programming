#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Movieinfo{

    char Actor[20];
    float imdb;
    

}obj1; //Error : Struct Movie has no field obj1

struct Movie {

    char mName[20];
    //struct Movie obj2; //gives error : obj2 undefined

}obj2;

void main() {

    
    strcpy(obj2.mName,"Kantara");
    strcpy(obj2.obj1.Actor,"Rishabh");
    obj2.obj1.imdb=9.7;

    printf("%s\n",obj2.mName);
    printf("%s\n",obj2.obj1.Actor);
    printf("%f\n",obj2.obj1.imdb);
}

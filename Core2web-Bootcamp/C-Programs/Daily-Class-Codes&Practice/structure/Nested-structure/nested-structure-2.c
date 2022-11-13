#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Movieinfo{

    char Actor[20];
    float imdb;

};

struct Movie {

    char mName[20];
    struct Movieinfo obj1;

};

void main() {

    struct Movie obj2={"Tumbaad",{"Sohan Sharma",8.8}};

    printf("%s\n",obj2.mName);
    printf("%s\n",obj2.obj1.Actor);
    printf("%f\n",obj2.obj1.imdb);
}

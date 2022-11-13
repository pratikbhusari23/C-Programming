#include<stdio.h>
#include<string.h>

struct Movie{
    char mName[20];
    struct Movieinfo{

        char actor[20];
        float imdb;

    }obj1;
    
};

void main() {

    struct Movie obj2={"Welcome",{"AnilKapoor",8.8}};

    printf("%s\n",obj2.obj1.actor);
    printf("%f\n",obj2.obj1.imdb);
    printf("%s\n",obj2.mName);
    


}

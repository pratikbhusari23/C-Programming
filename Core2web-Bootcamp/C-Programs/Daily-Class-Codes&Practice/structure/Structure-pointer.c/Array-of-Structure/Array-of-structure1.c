// Found that i am lagging in accessing values through pointer
// Must Revise Array , Pointer and how to access it

#include<stdio.h>

struct Player{

    char Pname[20];
    int jerno;
    float rev;

};

void main() {

    struct Player obj1={"Virat Kohli",18,98.500};
    struct Player obj2={"Messi",10,458.33};
    struct Player obj3={"James",6,9500.443};

    struct Player arr[]={obj1,obj2,obj3};

   for(int i=0 ;i<3 ; i++){

        printf("%s\n",arr[i].Pname);
        printf("%d\n",arr[i].jerno);
        printf("%f\n",arr[i].rev);

    }
    

    // printf("%d\n",obj1);
    // printf("%s\n",&obj1);
    // printf("%s\n",&obj1.Pname);
    
        // printf("%s\n",*((int*)(arr+2)+1));
        // printf("%s\n",*(arr+1));
        // printf("%s\n",*(arr));
        // printf("%s\n",arr[1][1][1]);
}
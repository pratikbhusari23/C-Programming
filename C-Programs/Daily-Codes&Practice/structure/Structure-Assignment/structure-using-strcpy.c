#include<stdio.h>

struct picnic{
    char location;
    int count;
    float distance;
};

char *mystrcpy(char * dest,char * src) {

    while (*src!='\0'){
        *dest = *src;
        dest++;
        src++;
    }
    *dest='\0';
    
    
}
void main() {

    struct picnic obj1={"Goa",5,46.05};
    struct picnic obj2;

    mystrcpy(obj2.location,"Kashmir");
    obj2.count=2;
    obj2.distance=1200.50;

    printf("%s\n",obj1.location);   
    printf("%d\n",obj1.count);   
    printf("%f\n",obj1.distance);   
    printf("%f\n",obj2.location);   
    printf("%f\n",obj2.count);   
    printf("%f\n",obj2.distance);   
    
}


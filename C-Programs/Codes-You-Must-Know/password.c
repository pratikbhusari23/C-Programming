#include<stdio.h>
int main(){
     int i;
     char ch1, password[10];
     printf("Enter your password:");
     for(i=0; i<10; i++)
     {
             ch1=getch();
             password[i]=ch1;
      
             if(ch1!=13)      //13 is ASCII of Enter key
                   printf("*");
             if(ch1 == 13)
                   break;
      }
      password[i]='\0';
      
      printf(" \n%s is Password", password);
      return 0;
}

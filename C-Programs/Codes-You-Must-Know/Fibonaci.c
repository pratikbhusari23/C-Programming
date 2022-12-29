// #include<stdio.h>

// void main(){

//     int a=0,b=1,c=a+b,n;

//     printf("Enter The No of Terms ?");
//     scanf("%d",&n);

//     printf("Fibonnaci series : %d ,%d ,",a,b);

//     for(int i=1 ; i<n ;i++){

//         printf("%d ,",c);
//         a=b;
//         b=c;
//         c=a+b;

//     }

//     printf("%d \n",c);
// }


int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long n; 
        scanf("%ld",&n);
        int a=0,b=1,c=a+b,sum=0;

        while(c<=n){
            if(c%2==0){
                sum+=c;
            }
            a=b;
            b=c;
            c=a+b;
        }

        printf("%d\n",sum);
        
        
    }
    
    return 0;
}
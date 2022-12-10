#include<stdio.h>

void  main(){
	
	int num,flag=0;

	printf("Enter a no To check its Prime or Not : \n");
	scanf("%d",&num);
	

	for(int i=2 ; i<=num/2 ;i++){

		if(num%i==0){
			flag=1;
			break;
		}
	}
	if(flag==1 || num<2){
		printf("%d is not a prime no !\n",num);
	}
	else {
		printf("%d is a Prime no\n",num);
	}
}

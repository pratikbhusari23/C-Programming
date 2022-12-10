#include<stdio.h>

void main(){
	
	int num,temp,rem,sum=0;
	printf("Enter no to check if its palindrome or not : ");
	scanf("%d",&num);
	
	temp=num;

	while(temp>0){

		rem=temp%10;
		sum=sum*10+rem;
		temp=temp/10;
	
	}

	if(sum==num){
		printf("%d is a Palindrome no \n",num);
	
	}
	else 
		printf("%d is NOT a Palindrome no !\n",num);


}

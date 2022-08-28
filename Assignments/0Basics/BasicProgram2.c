/* write a program to print the value of below expression 
 */

#include<stdio.h>

void main() {
	int x;
	int ans;
	printf("Enter No : ");
	scanf("%d",&x);
	//ans = ++x + x++ + ++x ;
	//ans = ++x + ++x + ++x + ++x ;
 	//ans = x++ + x++ + ++x + x++ + ++x ;
 	ans = x++ + x++ + x++ + x++ ;
 	
	printf("Value of ans is %d\n",ans);
	printf("Value of x is %d\n",x);
}

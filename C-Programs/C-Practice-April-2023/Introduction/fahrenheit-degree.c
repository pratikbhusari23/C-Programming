#include<stdio.h>

// Print Farenheit - Celcius Table for fahrenheit = 0,20,..... 300  


void main(){


	int upperBound = 300;
	int step = 20;	

	
	int fahrenheit=0;

	while(fahrenheit <=upperBound){
		
		int celsius = 5*(fahrenheit-32)/9  ;
		printf("%d\t %d\n",fahrenheit,celsius);
		fahrenheit+=step;
	}
}

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

/*

0        17
20       6
40       4
60       15
80       26
100      37
120      48
140      60
160      71
180      82
200      93
220      104
240      115
260      126
280      137
300      148

*/

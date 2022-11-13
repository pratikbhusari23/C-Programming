#include<stdio.h>

struct CricPlayer{

	char pName[20];
	float avg;
	int jerno;
}
obj2={"MS Dhoni 7",45.25,7};

void main() {
	
	struct CricPlayer obj1={"virat kohli 18",50.33,18};

	printf("%s\n",obj1.pName);
	printf("%d\n",obj1.jerno);
	printf("%f\n",obj1.avg);
	printf("%s\n",obj2.pName);
	printf("%d\n",obj2.jerno);
	printf("%f\n",obj2.avg);

}

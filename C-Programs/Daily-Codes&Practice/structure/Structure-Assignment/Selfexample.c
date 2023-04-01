// Wholesale Distributor Structure Example

#include<stdio.h>

struct laptop{

	char Modelname[20];
	float BuyingPrice;
	int noofunits;
}
obj2={"HP Pavillion",75684.55,7};

void main() {
	
	struct laptop obj1={"Acer Nitro5",65767.33,18};

	printf("%s\n",obj1.Modelname);
	printf("%d\n",obj1.noofunits);
	printf("%f\n",obj1.BuyingPrice);
	printf("%s\n",obj2.Modelname);
	printf("%d\n",obj2.noofunits);
	printf("%f\n",obj2.BuyingPrice);

}

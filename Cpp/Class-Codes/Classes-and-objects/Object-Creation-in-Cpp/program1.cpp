#include<iostream>

class Player{
	
	int jerNo;
	std::string name;

	public:

	void info(){
		
		std::cout<<jerNo<<" = "<<name<<std::endl;

	}
	Player(){
	}
};

int main(){
	
	Player vk;
	vk.info();
}

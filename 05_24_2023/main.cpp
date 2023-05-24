#include <iostream>
#include <memory>
#include <list> 
#include "myinclude.hpp"


void f(std::unique_ptr<Child> uni){
}

void g(std::list<Base*>& lis){
}

int main(int argc, char** argv){
	Child ch;
	std::cout << ch << std::endl;
	ch.addKnowledge(cooking);
	ch.addKnowledge(reading);
	std::cout << ch << std::endl;


	return 0;
}

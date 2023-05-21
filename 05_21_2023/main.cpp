#include <iostream>
#include <memory>
#include <array>
#include <algorithm>
#include "myinclude.hpp"

void g(std::array<Child,4>&);
void f(std::shared_ptr<Child>);


int main(int argc, char** argv){
	std::array<Child,4> array;
	int i=1;
	for(auto& x: array)
		x = Child(i<<1);
	g(array);
	for(auto& x:array)
		x = Child(-1);
	g(array);

	std::shared_ptr<Child> shChild = std::make_shared<Child>(12);
	f(shChild);

	return 0;
}

void g(std::array<Child,4>& ara){
	if(std::all_of(ara.begin(),ara.end(),[](Child& c){
				Child def;
				return c<def;}))
		std::cout << "\tThey are all less than the default child.\n";
	else
		std::cout << "\tSome are greater than the default child.\n";
}
void f(std::shared_ptr<Child> sha){
	unsigned long s = 9;
	sha->childAction(8,s);
}

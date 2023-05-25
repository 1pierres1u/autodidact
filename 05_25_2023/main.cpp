#include <iostream>
#include <set> 
#include <algorithm>
#include <memory>
#include "myinclude.hpp"


void f(std::unique_ptr<Child> uniChild){
}



void g(std::set<Child>& setCh){
	for(auto& it: setCh){
		std::cout << it << " ";
	}
}


int main(int argc, char** argv){
	Child chb("str"),cha;
	if(chb < cha)
		std::cout << "chb: " << chb << std::endl;
	else
		std::cout << "cha: " << cha << std::endl;
	return 0;

	std::set<Child> setCh;
	std::string tmp="";
	for(int i=0; i<12; i+=2){
		tmp = static_cast<char>(i);
		setCh.insert(Child(tmp));
	}
	g(setCh);

}

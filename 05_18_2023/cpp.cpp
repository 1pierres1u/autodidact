#include <iostream>
#include <cmath>
#include <iomanip>
#include "myinclude.hpp"
#include <map>




void g(std::map<int,B> V){
	for(auto&[key,val]:V){
		std::cout << key << " ";	
	}
}


int f(A* a, int& c, int b=0);

int main(int argc, char** argv){
	int c=argc,d=4;
	double e = 45.54376;
	A* a;
	B b(c,d);
	f(&b,c);
	std::cout << std::fixed << std::setprecision(3);
	std::cout << std::setw(7) <<std::left <<  b << std::setw(7) << c 
		 <<std::setw(7) << e << std::endl;
	return 0;
}

int f(A* a, int& c, int b){
	a->doThis();
	c = 0;
	return c;
}

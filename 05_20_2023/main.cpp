#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <map>
#include "myinclude.hpp"

void display(const std::map<int,B>& V){
	for(auto [key,value]:V){
		std::cout << key << " " << value << std::endl;
	}
}
int f(A* a, int& c, int b=0);
	

int main(int argc, char** argv){
	int   c = argc;
	double e=45.54376;
	A* a;
	B b(c,0);
	f(&b,c);
	std::cout << std::fixed << std::showpoint  << std::setprecision(3);
	std::cout << std::setw(7) << std::left << b << std::setw(7) << c
		<<std::setw(7) << e << std::endl;
	return 0;
}


int f(A* a, int& c, int b){
	a->doThis();
	c=0;
	return c;
}


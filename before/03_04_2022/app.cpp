#include "app_a.h"
#include "app_b.h"
#include <iostream>
using namespace std;

void display(A& a){
	cout << a << endl;
}


int main(){
	A a;
	a.generate();
	B b;
	b.generate();
	cout << b << endl << a << endl;
	display(b);
	//
	cout << "After move constructor:" <<endl;
	B c(move(b));
	cout << c << endl << b;


	return EXIT_SUCCESS;
}

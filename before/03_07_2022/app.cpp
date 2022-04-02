#include "app_a.h"
#include "app_b.h"
#include <iostream>
using namespace std;


void f(){
	A a;
	a.set_size(20);
	a.generate();
	cout << a << endl;
}


int main(){
	A a(10);
	a.generate();
	cout << a << endl;
	B b;
	b.set_f(f);	
	b.execute();
	return EXIT_SUCCESS;
}

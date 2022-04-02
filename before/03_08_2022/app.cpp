#include <iostream>
#include "app_a.h"
#include "app_b.h"
#include <cstdlib>
#include <climits>

using namespace std;



void display(A ax){
	ax.setFile("unsigned_ll.txt");
	ax.add(1);
	ax.add(2);
	ax.add(4);
	ax.save();
}

int main(){
	srand(time(0));
	A a("set_record.txt");
	for(int i=0; i <25; i++){
		a.add(rand()%100);
	}
	a.save();
	cout << a << endl;
	
	cout << "-------------" << endl;
	A b("set_record.txt");
	cout << b << endl;
	b.read();
	cout << b << endl;
	cout << "found LLONG_MAX: " << b.find(LLONG_MAX)<<endl;
	b.add(LLONG_MAX);
	cout << "found LLONG_MAX: " << b.find(LLONG_MAX)<<endl;

	B c;
	c.execute(display);

	return EXIT_SUCCESS;
}


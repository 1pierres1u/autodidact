#include <iostream>
using namespace std;

enum var{X,Y};

class A{
	public:
		size_t h();
		virtual var g();
		var g(int x);
		virtual void f()=0;
};

class B:public A{
	var g(){
		cout << "g()" << endl;
		return X;
	}
	void f(){
		cout << "f()" << endl;
	}
};


int main(int argc,char** argv){
	A* ax;
	ax=new B();
	ax->f();
		
	return 0;
}

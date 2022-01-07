#include <iostream>
using namespace std;

class A{
	private:
		int x;
	public:
		A(){}
		A(int xx):x{xx}{}
		int get_x()const{return x;}
		void set_x(int xx){x=xx;}
};

class B:public A{
	private:
		int y;
	public:
		B(){}
		B(int xy):y{xy}{}
		int get_x()const=delete;
		void set_x()=delete;
		int get_y()const{return y;}
		void set_y(int xy){y=xy;}
};


int main(int argc, char** argv){
	B b(9);
	b.set_y(10);
	//cout << b.get_x() << endl; //use of deleted function
	return 0;
}

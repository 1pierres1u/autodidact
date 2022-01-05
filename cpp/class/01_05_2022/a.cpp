#include <iostream>
using namespace std;

class A{
	protected:
		int x;
	private:
		int y;
	public:
		A()=delete;
		A(int xx, int xy):x{xx},y{xy}{
		}
		A(const A& ax):x{ax.x},y{ax.y}{
		}
		A(A&& ax):x{move(ax.x)},y{move(ax.y)}{
		}
		//
		int f1(int p)const{
			return p+=y;
		}
		virtual void f2()=0;
		
};

class B : private A{
	protected:
		unsigned int u;
	private:
		unsigned int v;
	public:
		B()=delete; //necessary because A()=delete
		B(unsigned int ux, unsigned int vx):
			A(ux+vx,ux-vx),u{ux},v{vx}
		{
		}
		B(const B& b):A(b.u+b.v,b.u-b.v),u{b.u},v{b.v}
		{
		}
		B(B&& b):A(b.u+b.v,b.u-b.v),u{move(b.u)},v{move(b.v)}
		{
		}
		void f2(){
			cout << "u = " << u << endl
				<< "v = " << v << endl
				<< "x = " << x << endl
				<< "f2:" << (u*v*x)<< endl;
		}
};

int main(int argc, char** argv){
	B b(9u,6u);
	//cout << b.f1(0) << endl; //f1 is private
	b.f2();
	A* ax;
	//ax = new B(10u,1u); //A is inaccessible base of B
	return 0;
}

#include <iostream>
#include <vector>
using namespace std;


class A{
	private:
		int ix;
	protected:
		float fx;
	public:
		double dx;
		A():ix(0),fx(0),dx(0){}
		A(int i, float f, double d):ix(i),fx(f),dx(d){}
		A(const A& a):ix(a.ix),fx(a.fx),dx(a.dx){}
		A(A&& a):ix(move(a.ix)),fx(move(a.fx)),dx(move(a.dx)){}
		friend ostream& operator<<(ostream& out, A& a){
			out << a.ix << " " << a.fx << " " << a.dx;
			return out;
		}
		void f(vector<bool> V, size_t g=0){}
		unsigned long long g(){return 0;}	
};

class B: public A{
	protected:
		bool bx;
	public:
		B():bx(false),A(0,0,0){}
		B(bool b):bx(b),A(-1,1,1){}
		B(const B& b):bx(b.bx),A(0,b.fx,b.dx){}
		friend ostream& operator<<(ostream& out, B& b){
			out << b.bx << " " << b.fx << " " << b.dx;
			return out;
		}
};

int main(int argc, char** argv){
	A a;
	A b(0,1,1);
	A c(b);
	A d(move(c));
	B e(true);
	B f(e);
	cout << "a = " << a << endl
	     << "b = " << b << endl
	     << "c = " << c << endl
	     << "d = " << d << endl
	     << "e = " << e << endl
	     << "f = " << f << endl;
	return 0;
}


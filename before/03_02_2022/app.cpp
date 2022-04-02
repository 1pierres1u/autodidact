#include <iostream>
#include <vector>
#include <bitset>
#include <functional>
#include <map>
#include <string>
#include <memory>
#include <thread>

using namespace std;


enum Color{red,black,yellow};


int Fa(vector<char> V){
	return V.size();
}
int Fb(vector<char> V){
	cout << V.size() << endl;
	return V.size();
}

class A{
	private:
		Color cx;
	protected:
		int ix;
	public:
		size_t sx;
		A():cx(red), ix(0), sx(1){}
		A(Color c, int i, size_t s):cx(c),ix(i),sx(s){}
		A(const A& a):cx(a.cx),ix(a.ix),sx(a.sx){}
		A(A&& a):cx(move(a.cx)),ix(move(a.ix)),sx(move(a.sx)){}
		friend ostream& operator<<(ostream& out, A& a){
			out << a.ix << " " << a.cx <<" " << a.sx;
			return out;
		}
		map<float,bitset<10>> f(double d=0,float f=0){
			return map<float,bitset<10>>();
		}
		size_t g(vector<char> V, string s,function<int(vector<char>)> F){
			return F(V);
		}
};

class B:public A{
	private:
		short sx;
	protected:
		unique_ptr<A> ux;
	public: 
		shared_ptr<B> bx;
		B():sx(0),ux(nullptr),bx(nullptr),A(red,0,0){}
		B(short s):sx(s),ux(nullptr),bx(nullptr),A(yellow,1,1){}
		B(const B& b):sx(b.sx),bx(b.bx),ux(nullptr){}
		B(B&& b):sx(move(b.sx)),ux(move(b.ux)),bx(move(b.bx)){}
		void h(weak_ptr<B> pB){}
		void e(thread T){
			T.join();
		}
}; 




int main(int argc, char** argv){
	A a;
	cout << a << endl;

	return EXIT_SUCCESS;
}

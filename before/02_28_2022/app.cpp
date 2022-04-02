#include <iostream>
#include <vector>
using namespace std;

class A{
	private:
		int x;
	protected:
		float y;
	public:
		A(){}
		A(int x_, float y_):x(x_),y(y_){}
		A(const A& a):x(a.x),y(a.y){}
		A(A&& a):x(move(a.x)),y(move(a.y)){}
		friend ostream& operator<<(ostream& out, A& a){
			out << a.x << " " << a.y << endl;
			return out;
		}
		void f(vector<bool> v, int n=0){}
		unsigned int g(){ return 0;}
};

int main(int argc, char** argv){
	A ax;
	cout << "A = " << ax << endl;
	return ax.g();
}

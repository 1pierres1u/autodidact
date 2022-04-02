#include <iostream>
#include <array>
#include <vector>
using namespace std;

struct B{
	int d;
};

class A{
	private:
		vector<int> a;
		B* pA;
	protected:
		float b;
	public:
		unsigned long long int c;
		A()=delete;
		A(int x):a(vector<int>(10,10)),pA(nullptr),b(1e10){
		}
		friend ostream& operator<<(ostream& out,const A& ax){
			for(auto x:ax.a){
				out << x << " ";
			}
			out << ax.b << " " << ax.c << endl;
			return out;
		}
		template<typename T>
		void increase(T x){
				c+=x;
		}
		array<int,4> avector(){
			array<int,4> V{1,1,1,1};
			int i=0;
			for(auto& x:V)
				x+=i;
			return V;
		}
		void allocate(){
			pA = new B();
		}
		friend void do_it(A& a);
		~A(){
			delete pA;
			pA = nullptr;
		}
		
};

void do_it(A& pa){
	pa.allocate();
	pa.pA->d=20;
}
int main(int argc,char** argv){
	A ax(10);
	do_it(ax);
	ax.increase(20.6);
	auto [a1,a2,a3,a4] = ax.avector();
	cout << ax << endl;
	cout << a1 << " " << a2 << " " << a3 << " " << a4 << endl;
	return 0;
}

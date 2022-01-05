#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

class A{
	protected:
		float f;
	private:
		int x;
		string  s;
		friend void display(const A& a);
	public:
		A(){
		}
		A(const A& ax):f{ax.f},x{0},s{ax.s}{
		}
		A(A&& ax):f{move(ax.f)},x{0},s{move(ax.s)}{
		}
		A(float fx):f{fx}{
		}
		A(const string& sx):s{sx}{
		}
		A(float fx,const string& sx):
			f(fx),s(sx)
		{
		}
};

void display(const A& a){
	cout << a.x << endl;
}

class B: public A{
	private:
		int x;
	protected:
		char c;
	public:
	B():x{0},c{'0'}{
	}
	B(int xx):x{cx}{
	}
	B(char cx):c{cx}{
	}
	B(const B& b){
	}
	B(B&& b):A{move(b)},x(move(x)},c{move(c)}{
	}

	B(float f):A(f){
	}
	B(float f,const string& s):A(f,s),x{0},c{'o'}{
	}
};


int main(int argc, char** argv){
	A a;
	B b(9.5f);
	display(a);
	display(b);
	return 0;
}




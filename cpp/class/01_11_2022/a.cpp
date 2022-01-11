#include <iostream>
#include <vector>
#include <functional>
#include <memory>
#include <fstream>
#include <cstdint>
#include <thread>
using namespace std;

typedef vector<int> vi;

class  A{
	protected:
		unique_ptr<vector<int>> pvx;
	private:
		shared_ptr<vector<int>> pvy;
	public:
		A():pvx{nullptr},pvy{nullptr}{}
		A(const A& ax):pvx{make_unique<vi>()},pvy{make_shared<vi>()}{
		}
		A(A&& ax):pvx{make_unique<vi>()},pvy{make_shared<vi>()}{
		}
		A& operator=(const A& a){
			return *this;
		}
		friend void f(size_t u,int v=0){
		}
		auto g(const vector<int>& V,function<void(int)>){
			return 0;
		}
		float h(unsigned long long llx=1u,bool b=false) const{
			return 2.0f;
		}
		friend ostream& operator<<(ostream& out, const A& a);
};

ostream& operator<<(ostream& out, const A& a){
	out << "pvx=";
	if(a.pvx!=nullptr){
		for(auto x:*a.pvx)
			out << x << " ";
	}
	else
		out << "[]";
	out << "\npvy";
	if(a.pvy!=nullptr){
		for(auto x:*a.pvy)
			out << x << " ";
	}
	else
		out << "[]\n";
	return out;
}

class B: public A{
	protected:
		uint32_t ui32;
	private:
		uint8_t ui8;
	public:
		B():ui32{UINT32_MAX},ui8{UINT8_MAX}{}
		B(const B& b)=delete;
		B(const A& a):A(a){}
		B(B&& b){}
		B& operator=(const B& b){
			return *this;
		}

		void fb(thread f){
			f.join();
		}
		size_t gb(){
			return pvx->size();
		}
		float h(unsigned long long llx=1u,bool b=false) const{
			return 3.0f;
		}
		friend ostream& operator<<(ostream& out,const B& b){
			out << b.ui32 << " " << b.ui8;
			return out;
		}
};



int main(int argc, char** argv){
	A a1;
	A a2(a1);
	B b;
	cout << b << " \n" << a1 << endl;
	return 0;
}

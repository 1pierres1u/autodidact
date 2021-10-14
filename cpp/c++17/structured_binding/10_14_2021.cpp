#include <iostream>
#include <vector>
using namespace std;

class A{
	private:
		int i;
	public:
		A(){}
		A(int j):i(j){cout << "parameter" << endl;}
		A(const A& a):i(a.i){cout << "copy" << endl;}
		A(A&& a):i(move(a.i)){cout << "move" << endl;}
		int geti(){return i;}
};

struct MyStruct{
	int i =0;
	string s;
	MyStruct(int j, string z):i(j),s(z){}
};

struct MyStructi{
	int i;
	MyStructi(int j):i(j){}
};

struct MyStructv{
	vector<int> vi;
	MyStructv(vector<int> v):vi(v){}
};

struct MyStructp{
	private:
		int  i;
		int  j;
	public:
		MyStructp(int k,int l):i(k),j(l){}
};

struct MyStructA{
	int i;
	A ax;
	MyStructA(int j,const A& a):i(j),ax(a){}
};


void binding(){
	MyStruct m(9,"hi");
	auto [u,v]= m;
	cout << u << " " << v << endl;
	//
	MyStructi mi(10);
	auto [i] = mi;
	auto [j] = mi;
	//int [k] = mi; //error:structured binding cannot have type int
	cout << i << " " << j << " " << endl;
	//
	//auto [l] = m; //error: only one  name provided for structure binding
	//
	MyStructv mv({9,9,9});
	auto [z] = mv;
	for(auto x:z)
		cout << x << " ";
	cout << endl;
	//
	MyStructp mp(9,10);
	//auto [t,f] = mp; //error: cannot decompose inacessible member
	//cout << t << " " << f << endl;
}

void qualifiers(){
    MyStructA ma(1,A{10});
    auto [u,v] = ma;
    cout << v.geti() << endl;
    auto& [w,x] = ma;
}

int main(){
	qualifiers();
	return 0;
}

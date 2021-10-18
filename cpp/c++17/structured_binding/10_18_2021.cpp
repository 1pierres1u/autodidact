#include <iostream>
#include <tuple>
#include <vector>
#include <array>

using namespace std;


struct staticA{
	static int a;
	int b;
	staticA():b(32){}
};

struct sB{
	int x;
	int y;
	sB():x(66),y(67){}
	sB(int a, int b):x(a),y(b){}
};

struct sC:public tuple<>{
	int x;
	int y;
	sC():x(66),y(67){}
	sC(int a, int b):x(a),y(b){}
};

struct sD: public tuple<int,int>{
	int x;
	int y;
	sD():x(66),y(67){}
	sD(int a, int b):x(a),y(b){}
};

void sBinding(){
	vector<int> V{1,2};
	int A[]{1,2,3};
	//auto [u,v]=V; //error: 2 names provided for structured bindings
	//cout << u << " " << v << endl;
	auto [x,y,z]=A;
	cout << x << " " << y << " " << z << endl;
	//
	array<int,3> Ai{0,1,2};
	auto [n,m,p] = Ai;
	cout << n << " " << m << " " << p << endl;
	//
	sB bs;
	staticA as;
	auto [e,f]=bs;
	cout << e << " " << f << endl;
	//auto [o,q]=as; //error: two names provided for 1 element
	auto [g]=as;
	cout << g << endl;
	//
	tuple<int,char,float,sB> tu{1,'a',1.9,sB()};
	auto [aa,ab,ac,ad] = tu;
	//
	sB cs(89,98);
	sB cd(91,92);
	auto [a1,a2] = cs;
	cout << a1 << " " << a2 << endl;
	//tie(a1,a2) = cd; //error: no match for operator =
	//
	sC ce(10,11);
	sC cf(12,13);
	auto [ca,cb] = ce;
	cout << ca << " " << cb << endl;
	//tie(ca,cb)=cf; //error: no match for operator =
	//
	tuple<int,int> ta{0,-1};
	tie(ca,cb)=ta;
	//
	tie(ca,cb)=sD(1,3); //sD inherit from tuple<int,int>
}


int main(){
 sBinding();
}

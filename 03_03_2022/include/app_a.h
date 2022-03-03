#ifndef A_H
#define A_H

#include <iostream>
#include <vector>
#include <bitset>
#include <memory>
#include <map>
#include <thread>
using namespace std;
class A{
	private:
		bitset<20> bx;
	protected:
		map<float,vector<bool>> mx;
	public:
		unique_ptr<double> ux;
		A(){}
		A(bitset<20> b, map<float,vector<bool>> m){}
		A(const A& a){}
		A(A&& a){}
		friend ostream& operator<<(ostream& out, A& a){
			for(auto [u,v]:a.mx)
				out << u << " " << v.size();
			out << endl;
			out << a.bx.count();
			return out;
		}
		bitset<20> get_bx()const{return bx;}
		void f(thread& T){
			T.join();
		}
		unsigned long g(unsigned int i=0){
			return i;	
		}
};
#endif

#ifndef A_H
#define A_H

#include <vector>
#include <iostream>
#include <cstdlib>

using namespace std;
typedef unsigned long long ull;


class A{
	private:
		vector<ull> vx;
	protected:
		int ix;
	public:
		ull dx;
		A():ix(10),dx(100){
			srand(time(0));
		}
		A(unsigned int i, ull d):ix(i),dx(d){
			srand(time(0));
		}
		A(vector<ull> v):vx(v),ix(v.size()),dx(v.size()){
			srand(time(0));
		}
		A(const A& a):vx(a.vx),ix(a.ix),dx(a.dx){
			srand(time(0));
		}
		A(A&& a):vx(move(a.vx)),ix(move(a.ix)),dx(move(a.dx)){
			srand(time(0));
		}
		friend ostream& operator<<(ostream& out, A& a){
			out << "[";
			for(auto u:a.vx)
				out << u << " ";
			out << "]";
			return out;
		}
		vector<ull> get_vx(){
			return vx;
		}
		void generate(){
				for(int i=0; i<ix; i++){
					vx.push_back(rand()%ix);
				}
		}
};

#endif


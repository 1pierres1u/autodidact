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
		A();
		A(unsigned int i, ull d);
		A(vector<ull> v);
		A(const A& a);
		A(A&& a);
		friend ostream& operator<<(ostream& out, A& a){
			out << "[";
			for(auto u:a.vx)
				out << u << " ";
			out << "]";
			return out;
		}
		vector<ull> get_vx()const;
		void generate();
};
#endif


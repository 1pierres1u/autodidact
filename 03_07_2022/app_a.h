#ifndef A_H
#define A_H

#include <vector>
#include <iostream>
using namespace std;

typedef unsigned long long ull; 


class A{
	private:
		size_t n;
	protected:
		vector<ull> vx;
	public:
		A();
		A(size_t nx);
		A(const A& a);
		A(A&& a);
		friend ostream& operator<<(ostream& out, A& a){
			out << "[";
			for(auto u:a.vx)
				out << u << " ";
			out << "]";
			return out;
		}
		ull operator[](size_t idx)const;
		void set_size(size_t nx);
		size_t get_size()const;
		void generate();
};
#include "app_a.cpp"
#endif

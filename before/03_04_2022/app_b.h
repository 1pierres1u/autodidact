#ifndef B_H
#define B_H

#include "app_a.h"
#include <set>
#include <iostream>
using namespace std;


class B:public A{
	private:
		set<ull> sx;
	public:
		B();
		B(set<ull> s);
		B(const B& b);
		B(B&& b);
		friend ostream& operator<<(ostream& out, B& b){
			out << "[";
			for(auto u:b.sx)
				out << u << " ";
			out << "]";
			return out;
		}
		void generate();
};
#endif

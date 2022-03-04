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
		B(){}
		B(set<ull> s):sx(s){}
		B(const B& b):sx(b.sx),A(b){}
		B(B&& b):sx(move(b.sx)),A(move(b)){}
		friend ostream& operator<<(ostream& out, B& b){
			out << "[";
			for(auto u:b.sx)
				out << u << " ";
			out << "]";
			return out;
		}
		void generate(){
			A::generate();
			for(int i=0; i<ix; i++){
				sx.insert(rand()%ix);
			}
		}
};
#endif

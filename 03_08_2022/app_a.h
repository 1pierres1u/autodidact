#ifndef A_H
#define A_H

#include <set>
#include <iostream>
#include <fstream>
#include <cassert>
#include <functional>
using namespace std;


typedef unsigned long long ull;

class A{
	private:
		string File;
	protected:
		set<ull> Set;
	public:
		A();
		A(string file);
		A(const A& a);
		A(A&& a);
		friend ostream& operator<<(ostream& out,A& a){
			out << "[";
			for(auto u:a.Set)
				out << u << " ";
			out << "]";
			return out;
		}
		void setFile(string file);
		void save()const;
		void read();
		void add(ull ux);
		bool find(ull ux);
};
#endif

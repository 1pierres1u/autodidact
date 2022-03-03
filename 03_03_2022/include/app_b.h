#ifndef B_H
#define B_H

#include "app_a.h"
#include <iostream>
#include <memory>
#include <thread>
#include <set>
#include <stack>
#include <vector>
using namespace std;

enum DogBreed{Hound, Malamute,Foxhound};
typedef unsigned long long ull;

class B: public A{
	private:
		shared_ptr<DogBreed> sx;
	protected:
		set<short> sex;
	public:
		stack<long> stx;
	B()=delete;
	B(DogBreed d, short s, long l){
		stx.push(l);
		sex.insert(s);
		sx = make_shared<DogBreed>(d);
	}
	B(const B& b):sx(b.sx),sex(b.sex),stx(b.stx),A(b.get_bx(),b.mx)
	{}
	B(B&& b):sx(move(b.sx)),sex(move(b.sex)),stx(move(b.stx)),
		A(b.get_bx(),move(b.mx))
	{}
	friend ostream& operator<<(ostream& out, B& b){
		out << b.sx;
		return out;	
	}
	auto h(vector<ull> V){
		return V.size();
	}
};
#endif 

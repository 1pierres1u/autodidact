#ifndef A_H
#define A_H

#include <iostream>
#include <limits>
#include <queue>
#include <fstream>
#include <cassert>
using namespace std;

template<typename T>
class W{
	public:
	int_fast8_t if8x;
	int8_t i8x;
	int16_t i16x;
	int32_t i32x;
	int64_t i64x;
	T tx;
	W():if8x(INT_FAST8_MIN),i8x(INT8_MAX),i16x(INT16_MIN),i32x(INT32_MAX),i64x(INT64_MIN)
	{}
	W(int_fast8_t if8,int8_t i8, int16_t i16, int32_t i32, int64_t i64, T t):
		if8x(if8),i8x(i8),i16x(i16),i32x(i32),i64x(i64),tx(t)
	{}
	friend ostream& operator<<(ostream& out,  W& w){
		out << "[" << w.if8x << " " << w.i8x << " " <<w.i16x << " " << w.i32x
		    << " " << w.i64x << "]";    	
		return out;
	}
	friend istream& operator>>(istream& in, W& w){
		int8_t i8;
		in >> i8;
		w.i8x = i8;
		w.if8x = i8 + INT_FAST8_MIN;
		w.i16x = i8 + INT16_MIN;
		w.i32x = i8 + INT32_MIN;
		w.i64x = i8 + INT64_MIN;
		w.tx = i8 + rand()%INT8_MAX;
		return in;
	}
	void generate(){
		if8x = rand()%INT_FAST8_MAX;
		i8x = rand()%INT8_MAX;
		i16x = rand()%INT16_MAX;
		i32x = rand()%INT32_MAX;
		i64x = rand()%INT64_MAX;
		tx = rand()%100;
	}
	T get_t()const{
		return tx;
	}
};




class Z{
	public:
	virtual void push(W<size_t> w)=0;
};


class A:public Z{
	private:
		queue<W<size_t>> qw;
	protected:
		bool loaded;
		string file;
	public: 
		A();
		A(queue<W<size_t>>& q);
		A(const A& a);
		A(A&& a);
		friend ostream& operator<<(ostream& out, A& a){
			out << "[";
			queue<W<size_t>> tmp;
			while(!a.qw.empty()){
				out << a.qw.front() << " ";
				tmp.push(a.qw.front());
				a.qw.pop();
			}
			while(!tmp.empty()){
				a.qw.push(tmp.front());
			}	
			out << "]";
			return out;
		}
		size_t size()const;
		void load_file();
		void save();
		virtual void push(W<size_t> wx);
		void pop();
		W<size_t>& front();
		W<size_t>& back();
};
#include "app_a.cpp"
#endif

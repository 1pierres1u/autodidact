#pragma once
#include <iostream>
#include <utility>
#include <cmath>

class A{
	public:
		virtual void doThis()=0;
	protected:
		int _a;
};
class B:public A{
	public:
		B():_b(0){_a=0;}
		B(int a, int b):_b(b){
			_a = std::sqrt(b);
		}
		B(const B& other):_b(other._b){_a=other._a;}
		B(B&& other):_b(std::move(other._b)){_a = std::move(other._a);}
		void doThis();
		friend std::ostream& operator<<(std::ostream& out, B& other){	
			out << other._a << " " << other._b << std::endl;
			return out;
		}
	private:
		int _b;

};

class C{
	public: 
		C():_a(0),_b(B()){}
		C(const C& other):_a(other._a),_b(other._b){
		}
		C(C&& other):_a(std::move(other._a)),_b(std::move(other._b)){
		}
	private:
		int _a;
		B  _b;
};


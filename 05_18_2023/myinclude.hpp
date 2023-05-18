#pragma once

class A{
	public:
		virtual void doThis()=0;
	protected:
		int _a;
};
class B: public A{
	public:
		B(){}
		B(int a, int b):_b(b){
			_a = std::sqrt(b);
		}
		void doThis();
		friend std::ostream& operator<<(std::ostream& out, B& b);
	private:
		int _b;
};
class C{
	public:
		C(){}
		C(C&& c):_b(std::move(c._b)),_a(std::move(_a)){}
	private:
		int _a;
		B _b;
};

std::ostream& operator<<(std::ostream& out, B& b){
	out << b._a <<" " << b._b;
	return out;
}

#include "myinclude.cpp"


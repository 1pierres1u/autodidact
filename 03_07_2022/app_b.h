#ifndef B_H
#define B_H

#include <thread>
#include <iostream>
#include <functional>
#include "app_a.h"
using namespace std;

class B{
	private:
		thread t;
	protected:
		function<void(void)> f;
	public:
		B();
		B(const B& b)=delete;
		B(B&& b)=delete;
		void set_f(function<void(void)> fx);
		void execute();
};
#endif 

#ifndef B_H
#define B_H

#include <thread>
#include <iostream>
#include "app_a.h"
using namespace std;


class B{
	private:
		thread t;
	protected:
		A ax;
	public:
		B();
		B(const B& b);
		B(B&& b);
		void execute(function<void(A)> action);
};
#endif

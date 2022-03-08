#include "app_b.h"
B::B(){}
B::B(const B& b){}
B::B(B&& b){}
void B::execute(function<void(A)> action){
	t = thread(action,ax);
	t.join();
}

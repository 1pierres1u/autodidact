#include "app_b.h"

B::B(){}
B::B(set<ull> s):sx(s){}
B::B(const B& b):sx(b.sx),A(b){}
B::B(B&& b):sx(move(b.sx)),A(move(b)){}
void B::generate(){
	A::generate();
	for(int i=0; i<ix; i++){
		sx.insert(rand()%ix);
	}
}

#include "app_a.h"

A::A():ix(10),dx(100){
	srand(time(0));
}
A::A(unsigned int i, ull d):ix(i),dx(d){
	srand(time(0));
}
A::A(vector<ull> v):vx(v),ix(v.size()),dx(v.size()){
	srand(time(0));
}
A::A(const A& a):vx(a.vx),ix(a.ix),dx(a.dx){
	srand(time(0));
}
A::A(A&& a):vx(move(a.vx)),ix(move(a.ix)),dx(move(a.dx)){
	srand(time(0));
}
vector<ull> A::get_vx()const{
	return vx;
}
void A::generate(){
		for(int i=0; i<ix; i++){
			vx.push_back(rand()%ix);
		}
}

#include "app_a.h"

A::A():loaded(false),file("")
{}
A::A(queue<W<size_t>>& q):loaded(false),file("")
{}
A::A(const A& a):qw(a.qw),loaded(a.loaded),file(a.file)
{}
size_t A::size()const{
	return qw.size();
}
void A::load_file(){
	assert(file != "");
	ifstream in(file);
	W<size_t> w;
	while(!in.eof()){
		in >> w;
		push(w);
	}
	loaded=true;
}
void A::save(){
	assert(file != "");
	ofstream out(file);
	queue<W<size_t>> tmp;
	while(!qw.empty()){
		out << qw.front().i8x<<endl; 
		tmp.push(qw.front());
		qw.pop();
	}
	while(!tmp.empty()){
		qw.push(tmp.front());
		tmp.pop();
	}
}
void A::push(W<size_t> wx){
	qw.push(wx);
}
void A::pop(){
	qw.pop();
}
W<size_t>& A::front(){
	return qw.front();
}
W<size_t>& A::back(){
	return qw.back();
}

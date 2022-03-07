A::A():n(1){
	srand(time(0));
}
A::A(size_t nx):n(nx){
	srand(time(0));
}
A::A(const A& a):n(a.n),vx(a.vx){
	srand(time(0));
}
A::A(A&& a):n(move(a.n)),vx(move(a.vx)){}
void A::set_size(size_t nx){
	n = nx;
}
size_t A::get_size()const{
	return n;
}
ull A::operator[](size_t idx)const{
	return vx[idx];
}
void A::generate(){
	for(int i=0; i<n; i++){
		vx.push_back(rand()%n);
	}
}

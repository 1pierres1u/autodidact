B::B(){}
void B::set_f(function<void(void)> fx){
	f = fx;
}
void B::execute(){
	t = thread(f);
	t.join();
}


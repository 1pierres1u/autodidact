A::A():File("")
{}
A::A(std::string file):File(file)
{}
A::A(const A& a):File(a.File),Set(a.Set)
{}
A::A(A&& a):File(move(a.File)),Set(move(a.Set))
{}
void A::setFile(string file){
	File = file;
}
void A::save()const{
	assert(File != "");
	ofstream file(File);
	for(auto u:Set)
		file << u << endl;
}
void A::read(){
	assert(File != "");
	ifstream file(File);
	ull x;
	while(!file.eof()){
		file >> x;	
		Set.insert(x);
	}
}
void A::add(ull ux){
	Set.insert(ux);
}
auto A::find(ull ux){
	return Set.find(ux)!=Set.end();
}

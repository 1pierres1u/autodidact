#include <iostream>
#include <map>
#include <cmath>
#include <fstream>

using namespace std;


class A{
	protected:
		map<size_t,size_t> M;
	private:
		size_t L;
	public:
		A():L{0}{
		}
		A(const A& ax):M{ax.M},L{ax.L} 
		{
		}
		A(A&& ax):M{move(ax.M)},L{move(ax.L)}
		{
		}
		A(int Lx):L{Lx}{
		}
		void set_L(size_t Lx){
			L = Lx;
		}
		void add(size_t pos, const string& s){
			if(pos <= L && M.find(pos)==M.end())
				M.emplace(pos,s.length());
		}
		void clear(){
			M.clear();
		}
};


class B: public A{
	protected:
		bool c;
	private:
		int d;
	public:
		B():c{1},d{0}{
		}
		B(const A& ax):A(ax),c{1},d{0}{
		}
		size_t f(){
			return pow(M.size(),2+c);
		}
		friend ostream& operator<<(ostream& out,const B& b);
};


ostream& operator<<(ostream& out,const B& b){
	cout << b.c << " " << b.d << " " << b.M.size() << endl;
	return out;
}


int main(int argc, char** argv){
	ifstream file(argv[1]);
	if(!file){
		cout << "file does not exist!" << endl;
		return 0;
	}

	B b;
	string s;
	int i=0;
	while(getline(file,s)){
		b.add(i,s);
	}
	cout << argv[1] << " " << b << endl;
	return 0;
}

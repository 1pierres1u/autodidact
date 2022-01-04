#include <iostream>
#include <string>
#include <vector>
using namespace std;


void f(vector<int>& V, int L=10){
	V.clear();
	if(L!=10)
		L = rand()%10+1;
	V.reserve(L);
	for(int i=0; i<L; i++){
		V.push_back(rand()%100);
	}
}

int main(int argc, char** argv){
	srand(time(0));
	vector<int> V;
	if(argc==1)
		f(V);
	else if(argc==2)
		f(V, stoi(argv[1]));
	for(auto x:V)
		cout << x << " ";
	cout << endl;
	return 0;
}


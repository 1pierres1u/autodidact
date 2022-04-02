#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#ifdef TEST
 	ifstream cins("test.txt");
	#define cin cins
#endif 



void solve(){
	string u;
	char v;
	cin  >> u >> v;
	size_t L = u.size();
	int left=0,right=L-1;
	bool can=false;
	for(int i=0; i<L && !can; i++){
		if(u[i]==v && left%2==0 && right%2==0){
			can = true;
			break;
		}
		left++;
		right--;
	}
	cout <<(can?"YES":"NO")<< endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}



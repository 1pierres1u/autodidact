#include <iostream>
#include <tuple>
using namespace std;

struct A{
	int x;
	int y;
	A():x(0),y(0){}
	A(int a,int b):x(a),y(b){}
};


void qualifiers(){	
  A aa(2,9);
  auto&  [u,v] = aa; 
  cout << u << " " << v << endl;
  u = 10; 
  v = 10;
  cout << u << " " << v << endl;
  
  auto const& [u1,v1] = aa;
  //u1 = 20; //error: assignment read-only variable
  //v1 = 20; //error: assignment read-only variable
  cout << u1 << " " << v1 << endl;

  u = 30;
  v = 40;
  auto&& [u2,v2] = move(aa);
  cout << u2 << " " << v2 << endl;


  auto [u3,v3] = A(2,4);
  cout << u3 << " " << v3 << endl;
  
  //auto& [u4,v4] = A(3,5); //error: cannot bind non-const lvalue reference of type 'A&' to an rvalue of type 'A'
  //cout << u4 << " " << v4 << endl;

  auto&& [u4,v4] = A(3,5);
  cout << u4 << " " << v4 << endl;
}


int main(){
	qualifiers();
}



#include <iostream>
#include <functional>
using namespace std;


//error: conversion from '<unresolved overloaded function type>' to non-scalar type 'std::function<int(int)>' requested
//int do_that(){
//	cout << "nothing" << endl;
//	return 0;
//}
//int do_that(double x){
//	return 0;
//}
int do_that(int x){
	cout << "value: " << x << endl;
	return 0;
}
//void do_that(int x){ //ambiguating new declaration of do_that(int)
//}

int f_int(int x){
	cout << "value: " << x << endl;
	return 0;
}

int main(){
	function<int()> f;
	function<int(int)> g=f_int;
        //f();//terminate called after throwing an instance of 'std::bad_function_call'
	g(0);
	//error: conversion from '<unresolved overloaded function type>' to non-scalar type 'std::function<int(int)>' requested
	//function<int(int)>  h=do_that;
	//
	function<int(int)> gt=do_that;
}




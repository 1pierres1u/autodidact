#include "myinclude.hpp"

int Base::_count =0;

void Child::overrideAction(){
	if(_cha==ULLONG_MAX)
		_cha--;
	else
		_cha++;
	Base::_count++;
}

void Child::childAction(ull ua){
	for_each(_flch.begin(), _flch.end(),[=,&ua](ull& pa){pa+=ua;});
	Base::_count++;
}

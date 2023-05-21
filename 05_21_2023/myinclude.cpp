#include "myinclude.hpp"


ulong Child::childAction(ulong ula, ulong&  ulc)const{
	return abs(ula + ulc);
}

void Child::doThis(){
	_ca = abs(_ba-4);
}

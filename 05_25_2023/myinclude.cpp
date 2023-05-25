#include "myinclude.hpp"

std::string Base::_strstat = "\n";

void Base::set(const std::string& str){
	_str  = str;
}
std::string Base::get()const{
	return _str;
}
bool Base::add(const std::string& s){
	if(_set.find(s)==_set.end()){
		_set.insert(s);
		return true;
	}
	return false;
}
bool Child::remove(const std::string str){
	if(_set.find(str)==_set.end())
		return false;
	else
		_set.erase(str);
	return true;
}
void Child::baseAction(){
	std::string tmp="";
	for(char ch='a'; ch<'z'; ch++)
		_strCh+=(tmp[0]=ch);
}


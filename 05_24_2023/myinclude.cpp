#include "myinclude.hpp"

const Knowledge Base::_core = God;

bool Child::canTeach(Knowledge know){

	return true;
}
void Parent::addKnowledge(Knowledge kno){
	_likn.push_front(kno);
}
void Child::baseAction(){
	if(!_skill.size()>2){
		_skill.resize(1);
	} else{
		_skill.sort();
	}
}
void Child::addKnowledge(Knowledge kno){
	Parent::addKnowledge(kno);
	_skill.push_back(kno);
}

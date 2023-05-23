#include <iostream>
#include <memory>
#include "myinclude.hpp"


void g(std::shared_ptr<Child> shpa){
	std::cout << "use count: " << shpa.use_count() << std::endl;
}

void f(std::forward_list<Child> flch={Child()}){
	std::cout << "Before resize: \n";
	for(auto x: flch)
		std::cout << x << std::endl;
	std::cout << "After resize: \n";
	flch.resize(2);
	for(auto x:flch)
		std::cout << x << std::endl;
}

int main(){
	Child cha,chb(12);
	std::cout << cha << std::endl;

	std::shared_ptr<Child> shpa = std::make_shared<Child>(0);
	std::cout << "use count: " << shpa.use_count() <<std::endl;
	auto tmp = shpa;
	std::cout << "use count: " << shpa.use_count() << std::endl;
	g(shpa);
	std::cout << "use count: " << shpa.use_count() << std::endl;

	std::forward_list<Child> flcha;
	flcha.push_front(cha);
	flcha.push_front(chb);
	flcha.push_front(cha);
	flcha.push_front(Child());
	f(flcha);
	return 0;
}

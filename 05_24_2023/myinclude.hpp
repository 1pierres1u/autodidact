#pragma once
#include <iostream>
#include <list>


enum Knowledge{reading,cooking,sewing,self_defense,God,coding,na};

class Parent{
	public: 
		Parent()=delete;
		Parent(Knowledge skill):_parski(skill){}
		virtual bool canTeach(Knowledge)=0;
		void addKnowledge(Knowledge kn);
	protected:
		std::list<Knowledge> _likn;
	private:
		Knowledge _parski;
		
};

class Base{
	public:
		void virtual baseAction()=0;
		Base()=default;
		Knowledge getCore()const{return _core;}
	private:
		static const Knowledge _core;
	
};

class Child: public Parent, private Base{
	public:
		//
		Child():Parent(coding),_favski(na){}
		Child(Knowledge skill):Parent(skill),_favski(skill){}
		Child(Knowledge skill, Knowledge Core):Parent(skill),_favski(skill){}
		Child(const Child& other):Parent(coding){}
		Child(Child&& ch):Parent(coding){}
		//
		friend std::ostream& operator<<(std::ostream& out, const Child& rhs){
			out << "favorite: " << rhs._favski << std::endl;
			for(auto x: rhs._skill){
				out << " " << x;
			}
			return out;
		}
		friend bool operator<(const Child& lhs, const Child& rhs){
			return lhs._skill.size() < rhs._skill.size();
		}
		Child& operator++(){
			return *this;
		}
		//
		void baseAction();
		bool canTeach(Knowledge);
		void addKnowledge(Knowledge);
	protected:
		std::list<Knowledge> _skill;
	private:
		Knowledge _favski;

};




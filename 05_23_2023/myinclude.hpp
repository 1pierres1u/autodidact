#ifndef MY_INCLUDE_HPP
#define MY_INCLUDE_HPP

#include <climits>
#include <iostream>
#include <cmath>
#include <forward_list>
#include <algorithm>

typedef unsigned long long ull;


class Base{

	public:
		virtual void overrideAction()=0;
		Base():_ba(ULLONG_MAX),_flbase({ULLONG_MAX}){}
		Base(ull ba):_ba(ba), _flbase({ULLONG_MAX,ba}){}
	protected:
		double baseAction(ull ua){
			double ta =  std::fmod((double)ua,(double)(ua+1));
			if(_flbase.empty())
				_flbase.push_front(ULLONG_MAX);
			else
				_flbase.push_front(ua);
			return ta;
		}
	protected:
		static int _count;
	private:
		ull _ba;
		std::forward_list<ull> _flbase;
};

class Child: public Base{
	public:
		Child():_cha(0),_flch({ULLONG_MAX}){}
		Child(ull cha):_cha(cha),_flch({ULLONG_MAX,cha}){}
		Child(const Child& other):_cha(other._cha), _flch({ULLONG_MAX,other._cha}){}
		Child(Child&& other):_cha(std::move(other._cha)),_flch(std::move(other._flch)){}
		//
		friend std::ostream& operator<<(std::ostream& out, const Child& rhs){
			out << rhs._cha;
			int i=2;
			for(auto it=rhs._flch.begin(); it!=rhs._flch.end(); it++){
				if(i){
					out<<" "<< *it;
					i--;
				} else
					break;
			}	
			return out;
		}
		friend bool operator<(const Child& lhs, const Child& rhs){
			return lhs._cha < rhs._cha;
		}
		friend Child& operator+(Child& lhs, const Child& rhs){
			lhs._cha += rhs._cha;
			return lhs;
		}
		//
		void overrideAction();
		void childAction(ull);
	private:
		std::forward_list<ull> _flch;
		ull _cha;
};
#endif

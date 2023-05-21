#pragma once
#include <iostream>
#include <cmath>
#include <array>

typedef unsigned long ulong;
const int SIZE = 10000;


class Base{
	public:
		Base():_bb(0){
		}
		Base(ulong bb):_bb(bb){
		}
		virtual void doThis()=0;
		void increment(){_bb++;}
	protected:
		ulong _ba;
	private:
		ulong _bb;
};

class Child: protected Base{
	public:
		//CONSTRUCTORS
		Child():Base(),_ca(0){
			_ba = 0;
		}
		Child(ulong ca):Base(),_ca(ca){
			_ba = abs(ca+3);

			for(auto& x:_ara)
				x = ca;
		}
		Child(const Child& other):Base(),_ca(other._ca){
			_ba = other._ba;
			_ara = other._ara;
		}
		Child(Child&& other):Base(),_ca(std::move(other._ca)){
			_ba = std::move(other._ba);
			_ara = std::move(other._ara);
		}
		//OPERATORS
		friend std::ostream& operator<<(std::ostream& out, const Child& rhs){
			out << rhs._ca;
			for(auto x: rhs._ara)
				out << " " << x;
			return out;
		}
		friend bool operator<(const Child& lhs, const Child& rhs){
			return lhs._ca < rhs._ca;
		}
		Child& operator=(const Child& other){
			if(this == &other){
				return *this;
			}

			_ba = other._ba;
			_ca = other._ca;
			_ara = other._ara;

			return *this;
		}
		//METHODS
		ulong childAction(ulong ula, ulong& ulc)const;
	protected:
		void doThis();
	private:
		std::array<ulong,SIZE> _ara;
		ulong _ca;

};


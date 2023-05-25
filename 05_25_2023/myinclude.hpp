#ifndef MY_INCLUDE_HPP
#define MY_INCLUDE_HPP

#include <string>
#include <set>
#include <iostream>


class Base{
	public:
		void virtual baseAction()=0;
		std::string get()const;
		Base()=default;
		Base(std::string str):_str(str){}
	protected:
		bool add(const std::string& s);
		std::set<std::string> _set;
		void set(const std::string& str);
	private:
		std::string _str;
		static std::string _strstat;
		
};


class Child final:protected Base{
	public:
		Child()=default;
		Child(const std::string& str):Base(str),_strCh(str){}
		Child(const Child& other):Base(other._strCh),_strCh(other._strCh){}
		Child(Child&& other):Base(other._strCh),_strCh(std::move(_strCh)){}
		//
		friend std::ostream& operator<<(std::ostream& out, const Child& other){
			out << other._strCh << "\t";
			for(auto x: other._set)
				out << x << " ";	
			return out;
		}
		friend bool operator<(const Child& lhs, const Child& rhs){
			return lhs._strCh.size() < rhs._strCh.size();
		}
		Child& operator=(const Child& rhs){
			if(this == &rhs)
				return *this;
			_strCh = rhs._strCh;
			set(rhs.get());
			return *this;
		}
		Child& operator=(Child& rhs){
			if(this == &rhs)
				return *this;
			_strCh = rhs._strCh;
			set(rhs.get());
			return *this;
		}
		bool remove(const std::string str);
		
	protected:
		void baseAction()override;
		
	private:
		std::string _strCh;
};






#endif

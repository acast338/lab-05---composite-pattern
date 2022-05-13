#ifndef __SUB_HPP__
#define __SUB_HPP__
#include"base.hpp"
#include <string>
class Sub : public Base {
    public:
        double ans;
        std::string str;
        Sub(Base* firstOp, Base* secondOp) : Base() {
           ans = firstOp->evaluate() - secondOp->evaluate();
	   str = "("+ firstOp->stringify() + "-" + secondOp->stringify() +")";
        }
	~Sub(){
	   Base* temp = this;
	    delete temp;
	}
        virtual double evaluate() { return ans; }
        virtual std::string stringify() { return str; }
};
#endif

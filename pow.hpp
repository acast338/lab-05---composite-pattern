#ifndef __POW_HPP__
#define __POW_HPP__
#include"base.hpp"
#include <string>
#include <math.h>
class Pow : public Base {
    public:
        double ans;
        std::string str;
        Pow(Base* firstOp, Base* secondOp) : Base() {
           ans = pow(firstOp->evaluate(),  secondOp->evaluate());
	   str = "("+ firstOp->stringify() + "**" + secondOp->stringify() +")";
        }
	~Pow(){
	   Base* temp = this;
	    delete temp;
	}
        virtual double evaluate() { return ans; }
        virtual std::string stringify() { return str; }
};
#endif

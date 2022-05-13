#ifndef __MULT_HPP__
#define __MULT_HPP__
#include"base.hpp"
#include <string>
class Mult : public Base {
    public:
        double ans;
        std::string str;
        Mult(Base* firstOp, Base* secondOp) : Base() {
           ans = firstOp->evaluate() *  secondOp->evaluate();
	   str = "("+ firstOp->stringify() + "*" + secondOp->stringify() +")";
        }
	~Mult(){
	   Base* temp = this;
	    delete temp;
	}
        virtual double evaluate() { return ans; }
        virtual std::string stringify() { return str; }
};
#endif

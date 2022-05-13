#ifndef __DIV_HPP__
#define __DIV_HPP__
#include"base.hpp"
#include <string>
class Div : public Base {
    public:
        double ans;
        std::string str;
        Div(Base* firstOp, Base* secondOp) : Base() {
           ans = firstOp->evaluate() /  secondOp->evaluate();
	   str = "("+ firstOp->stringify() + "/" + secondOp->stringify() +")";
        }
	~Div(){
	   Base* temp = this;
	    delete temp;
	}
        virtual double evaluate() { return ans; }
        virtual std::string stringify() { return str; }
};
#endif

#ifndef __ADD_HPP__
#define __ADD_HPP__
#include"base.hpp"
#include <string>
class Add : public Base {
    public:
        double ans;
        std::string str;
        Add(Base* firstOp, Base* secondOp) : Base() {
           ans = firstOp->evaluate() +  secondOp->evaluate();
	   str = "("+ firstOp->stringify() + "+" + secondOp->stringify() +")";
        }
	~Add(){
	   Base* temp = this;
	    delete temp;
	}
        virtual double evaluate() { return ans; }
        virtual std::string stringify() { return str; }
};
#endif

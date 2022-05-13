#ifndef __RAND_HPP__
#define __RAND_HPP__
#include"base.hpp"
#include <string>
class Rand : public Base {
    public:
        double val;
        std::string str;
        Rand() : Base() {
           val = std::rand() % 100;
           str = std::to_string(val);
        }
	~Rand(){
	   Rand* temp = this;
	   delete temp;
	}
        virtual double evaluate() { return val; }
        virtual std::string stringify() { return str; }
};
#endif

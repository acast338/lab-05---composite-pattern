#ifndef __OP_HPP__
#define __OP_HPP__
using namespace std;

#include "base.hpp"
#include <string>

class Op : public Base {
  private:
    double val;
    string str;

  public:
    Op(double val) : Base() {
        this->val = val;
        this->str = to_string(val);
        this->str.erase(str.find_last_not_of('0')+2, string::npos);
    }
    ~Op() {
        Op* temp = this;
        delete temp;
    }
    virtual double evaluate() { return val; }
    virtual string stringify() {
        return str; 
    }
};

class SevenOpMock: public Base {
  public:
    SevenOpMock() { }

    virtual void add(Base*) {}
    virtual double evaluate() { return 7.5; }
    virtual string stringify() { return "7.5"; }
};

class NegSevenOpMock: public Base {
  public:
    NegSevenOpMock() { }

    virtual void add(Base*) {}
    virtual double evaluate() { return -7.5; }
    virtual string stringify() { return "-7.5"; }
};

class ZeroOpMock: public Base {
  public:
    ZeroOpMock() { }

    virtual void add(Base*) {}
    virtual double evaluate() { return 0.0; }
    virtual string stringify() { return "0.0"; }
};

#endif //__OP_HPP__

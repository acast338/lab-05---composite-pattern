#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
  private:
    double value;

  public:
    Op(double value) : Base() { 
        this->value = value;
    }
    virtual double evaluate() { return value; }
    virtual std::string stringify() { return ""; }
};

class SevenOpMock: public Base {
  public:
    SevenOpMock() { }

    virtual double evaluate() { return 7.5; }
    virtual std::string stringify() { return "7.5"; }
};

class NegSevenOpMock: public Base {
  public:
    NegSevenOpMock() { }

    virtual double evaluate() { return -7.5; }
    virtual std::string stringify() { return "-7.5"; }
};

class ZeroOpMock: public Base {
  public:
    ZeroOpMock() { }

    virtual double evaluate() { return 0; }
    virtual std::string stringify() { return "0"; }
};

#endif //__OP_HPP__

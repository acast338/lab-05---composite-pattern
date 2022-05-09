#ifndef __ZEROOPMOCK_HPP__
#define __ZEROOPMOCK_HPP__

#include "base.hpp"

class SevenOpMock: public Base {
    public:
        SevenOpMock() { }

        virtual double evaluate() { return 0; }
        virtual string stringify() { return "0"; }
}

#endif //__ZEROOPMOCK_HPP__


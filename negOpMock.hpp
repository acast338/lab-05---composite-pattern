#ifndef __NEGOPMOCK_HPP__
#define __NEGOPMOCK_HPP__

#include "base.hpp"

class SevenOpMock: public Base {
    public:
        SevenOpMock() { }

        virtual double evaluate() { return -7.5; }
        virtual string stringify() { return "-7.5"; }
}

#endif //__NEGOPMOCK_HPP__


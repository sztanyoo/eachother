#ifndef _B_
#define _B_

#include "a.hpp"

class A;

class B
{
  public:
    void setA( A* a);
    A* getA();
    void speak();
    B();
  private:
    A* m_a;
};

#endif

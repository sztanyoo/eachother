#ifndef _A_
#define _A_

#include "b.hpp"
class B;

class A
{
  public:
    void setB( B* b );
    A();
    void speak();
    B* getB();
    void useB();
  private:
    B* m_b;
};

#endif

#include <iostream>

#include "a.hpp"
#include "b.hpp"

using namespace std;



int main()
{
  A* a = new A();
  B* b = new B();
  a->setB( b );
  b->setA( a );
  cout << "a: " << a << " B.a: " << b->getA() << endl;
  cout << "b: " << b << " A.b: " << a->getB() << endl;
  a->getB()->getA()->speak();
  b->getA()->getB()->speak();
  a->useB();

  delete a;
  delete b;

  return 0;
}



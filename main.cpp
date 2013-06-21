#include <iostream>
#include <vector>

using namespace std;

class B;

class A
{
  public:
    void setB( B* b );
    A();
    void speak();
    B* getB();
  private:
    B* m_b;
};

A::A() : m_b( NULL )
{}

void A::setB( B* b )
{
  m_b = b;
}

void A::speak()
{
  cout << "A" << endl;
}

B* A::getB()
{
  return m_b;
}

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

B::B() : m_a( NULL )
{}

A* B::getA()
{
  return m_a;
}

void B::speak()
{
  cout << "B" << endl;
}

void B::setA( A* a )
{
  m_a = a;
}

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

  delete a;
  delete b;

  return 0;
}



#include <iostream>
#include "a.hpp"

A::A() : m_b( NULL )
{}

void A::setB( B* b )
{
  m_b = b;
}

void A::speak()
{
  std::cout << "A" << std::endl;
}

B* A::getB()
{
  return m_b;
}

void A::useB()
{
  m_b->speak();
}

#include <iostream>
#include "b.hpp"


B::B() : m_a( NULL )
{}

A* B::getA()
{
  return m_a;
}

void B::speak()
{
  std::cout << "B" << std::endl;
}

void B::setA( A* a )
{
  m_a = a;
}

#include "Base.hpp"

Base::Base()
{

}

Base::~Base()
{

}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

// void identify(Base& p)
// {

// }

Base * generate(void)
{
    Base *p; 
    srand(time(NULL));
    int i = (rand() % 3) + 1;
    std::cout << i << std::endl;
    if (i == 1)
        p = new A();
    else if (i == 2)
        p = new B();
    else
        p = new C();
    return p;
}


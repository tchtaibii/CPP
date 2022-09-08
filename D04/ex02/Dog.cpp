#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "default constructor (Dog)" << std::endl;
    this->o = new Brain();
}

Dog::~Dog()
{
    std::cout << "destructor (Dog)" << std::endl;
    delete o;
}

Dog::Dog(const Dog& cp)
{
    *this = cp;
    std::cout << "copy constructor (Dog)" << std::endl;
}

Dog Dog::operator=(const Dog& cp)
{
    std::cout << "assignment copy (Dog)" << std::endl;
    this->type = cp.type;
    this->o = new Brain();
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog : Hooooooooew!" << std::endl;
}

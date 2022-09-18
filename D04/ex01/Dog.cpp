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
    delete this->o;
}

Dog::Dog(const Dog& cp)
{
    std::cout << "copy constructor (Dog)" << std::endl;
    this->o = new Brain();
    *this = cp;
}

Dog& Dog::operator=(const Dog& cp)
{
    std::cout << "assignment copy (Dog)" << std::endl;
    this->type = cp.type;
    delete o;
    this->o = new Brain();
    for (int i = 0; i < 100 ; i++)
        this->o->set(i, cp.o->get(i));
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog : Hooooooooew!" << std::endl;
}

void Dog::setBrain(int index, std::string value)
{
    this->o->Brain::set(index, value);
}

std::string Dog::getBrain(int index)
{
    if (index >= 0 && index < 100)
        return (this->o->Brain::get(index));
    return "";
}
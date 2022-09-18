#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "default constructor (Dog)" << std::endl;
}

Dog::~Dog()
{
    std::cout << "destructor (Dog)" << std::endl;
}

Dog::Dog(const Dog& cp)
{
    *this = cp;
    std::cout << "copy constructor (Dog)" << std::endl;
}

Dog& Dog::operator=(const Dog& cp)
{
    std::cout << "assignment copy (Dog)" << std::endl;
    this->type = cp.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog : Hooooooooew!" << std::endl;
}
/// WrongDog ///

WrongDog::WrongDog()
{
    this->type = "WrongDog";
    std::cout << "default constructor (WrongDog)" << std::endl;
}

WrongDog::~WrongDog()
{
    std::cout << "destructor (WrongDog)" << std::endl;
}

WrongDog::WrongDog(const WrongDog& cp)
{
    *this = cp;
    std::cout << "copy constructor (WrongDog)" << std::endl;
}

WrongDog& WrongDog::operator=(const WrongDog& cp)
{
    std::cout << "assignment copy (WrongDog)" << std::endl;
    this->type = cp.type;
    return *this;
}

void WrongDog::makeSound() const
{
    std::cout << "WrongDog : Hooooooooew!" << std::endl;
}
#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "default constructor (Cat)" << std::endl;
}

Cat::~Cat()
{
    std::cout << "destructor (Cat)" << std::endl;
}

Cat::Cat(const Cat& cp)
{
    *this = cp;
    std::cout << "copy constructor (Cat)" << std::endl;
}

Cat& Cat::operator=(const Cat& cp)
{
    std::cout << "assignment copy (Cat)" << std::endl;
    this->type = cp.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Cat : Meooooooow!" << std::endl;
}

/// WrongCat ////////

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "default constructor (WrongCat)" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "destructor (WrongCat)" << std::endl;
}

WrongCat::WrongCat(const WrongCat& cp)
{
    *this = cp;
    std::cout << "copy constructor (WrongCat)" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& cp)
{
    std::cout << "assignment copy (WrongCat)" << std::endl;
    this->type = cp.type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat : Meooooooow!" << std::endl;
}

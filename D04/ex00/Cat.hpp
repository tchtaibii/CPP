#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat& cp);
        Cat operator=(const Cat& cp);
        ~Cat();
        void makeSound() const;
};

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat& cp);
        WrongCat operator=(const WrongCat& cp);
        ~WrongCat();
        void makeSound() const;
};

#endif
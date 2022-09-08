#ifndef CAT_HPP
#define CAT_HPP

#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *o;
    public:
        Cat();
        Cat(const Cat& cp);
        Cat operator=(const Cat& cp);
        ~Cat();
        void makeSound() const;
};


#endif
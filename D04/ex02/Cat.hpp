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
        Cat& operator=(const Cat& cp);
        ~Cat();
        void makeSound() const;
        void setBrain(int index, std::string value);
        std::string getBrain(int index);
};

#endif
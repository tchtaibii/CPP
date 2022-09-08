#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j1 = new Dog();
    const Animal* i1 = new Cat();
    
    std::cout << j1->getType() << " " << std::endl;
    std::cout << i1->getType() << " " << std::endl;
    i1->makeSound(); //will output the cat sound!
    j1->makeSound();
    meta->makeSound();

    delete i1;
    delete j1;
    delete meta;

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;
    system("leaks Animal");
}
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

void f()
{
    Cat a;
    a.setBrain(0, "jack");
    a.setBrain(1, "barbosa");
    a.setBrain(2, "rick");
    Cat b(a);
    std::cout << b.getBrain(0) << std::endl;
    std::cout << b.getBrain(1) << std::endl;
    std::cout << b.getBrain(100) << std::endl;

}
int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete j;
    delete i;
    delete meta;

    // f();
        // system("leaks Animal");
}
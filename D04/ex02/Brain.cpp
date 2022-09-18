#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "default constructor (Brain)" << std::endl;
}

Brain::~Brain()
{
    std::cout << "destructor (Brain)" << std::endl;
}

Brain::Brain(const Brain& cp)
{
    *this = cp;
    std::cout << "copy constructor (Brain)" << std::endl;
}

Brain& Brain::operator=(const Brain& cp)
{
    std::cout << "assignment copy (Brain)" << std::endl;
    for (int i = 0; i < 100 ; i++)
        this->ideas[i] = cp.ideas[i];
    return *this;
}

std::string Brain::get(int index)
{
    if (index >= 0 && index < 100)
        return(this->ideas[index]);
    return NULL;
}

void Brain::set(int index, std::string value)
{
    if (index >= 0 && index < 100 && !value.empty())
    {
        ideas[index] = value;
    }
}
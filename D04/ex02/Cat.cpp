/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:31:48 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/09/12 12:18:06 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "default constructor (Cat)" << std::endl;
    this->o = new Brain();
}

Cat::~Cat()
{
    std::cout << "destructor (Cat)" << std::endl;
    delete this->o;
}

Cat::Cat(const Cat& cp)
{
    std::cout << "copy constructor (Cat)" << std::endl;
    this->o = new Brain();
    *this = cp;
}

Cat& Cat::operator=(const Cat& cp)
{
    std::cout << "assignment copy (Cat)" << std::endl;
    this->type = cp.type;
    delete this->o;
    this->o = new Brain();
    for (int i = 0; i < 100 ; i++)
        this->o->set(i, cp.o->get(i));
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Cat : Meooooooow!" << std::endl;
}

void Cat::setBrain(int index, std::string value)
{
    this->o->Brain::set(index, value);
}

std::string Cat::getBrain(int index)
{
    if (index >= 0 && index < 100)
        return (this->o->Brain::get(index));
    return "";
}

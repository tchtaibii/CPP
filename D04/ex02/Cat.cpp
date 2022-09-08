/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:31:48 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/09/08 16:40:46 by tchtaibi         ###   ########.fr       */
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
    *this = cp;
    std::cout << "copy constructor (Cat)" << std::endl;
}

Cat Cat::operator=(const Cat& cp)
{
    std::cout << "assignment copy (Cat)" << std::endl;
    this->type = cp.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Cat : Meooooooow!" << std::endl;
}


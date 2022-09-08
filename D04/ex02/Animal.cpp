/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:50:33 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/09/08 16:40:55 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "just Animal";
    std::cout << "default constructor (Animal)" << std::endl;
}

Animal::~Animal()
{
    std::cout << "destructor (Animal)" << std::endl;
}

Animal::Animal(const Animal& cp)
{
    std::cout << "copy constructor (Animal)" << std::endl;
    *this = cp;
}

Animal Animal::operator=(const Animal& cp)
{
    std::cout << "assignment copy (Animal)" << std::endl;
    this->type = cp.type;
    return *this;
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "this Animal has no sound." << std::endl;
}

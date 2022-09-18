/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:50:33 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/09/12 10:05:04 by tchtaibi         ###   ########.fr       */
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

Animal& Animal::operator=(const Animal& cp)
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
/// WrongAnimal ///
WrongAnimal::WrongAnimal()
{
    this->type = "just WrongAnimal";
    std::cout << "default constructor (WrongAnimal)" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "destructor (WrongAnimal)" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& cp)
{
    std::cout << "copy constructor (WrongAnimal)" << std::endl;
    *this = cp;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& cp)
{
    std::cout << "assignment copy (WrongAnimal)" << std::endl;
    this->type = cp.type;
    return *this;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "this Animal has no sound." << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:50:33 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/09/12 11:40:21 by tchtaibi         ###   ########.fr       */
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

std::string Animal::getType() const
{
    return (this->type);
}

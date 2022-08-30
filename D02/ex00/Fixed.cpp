/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:22:23 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/08/21 15:28:47 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->vf = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
    
int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->vf);
}


void Fixed::setRawBits(int const raw)
{
    this->vf = raw;
}

Fixed::Fixed(Fixed &cp)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cp;
}

Fixed& Fixed::operator=(const Fixed &cp)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->vf = cp.getRawBits();
    return (*this);
}

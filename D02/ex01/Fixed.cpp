/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:22:23 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/08/30 00:43:33 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
    this->vf = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &cp)
{
    std::cout << "Copy constructor called" << std::endl;
    this->vf = cp.vf;
}

Fixed::Fixed(const int n_int)
{
    std::cout << "Int constructor called" << std::endl;
    this->vf = n_int * (1 << this->nb);
}

Fixed::Fixed(const float n_float)
{
    std::cout << "Float constructor called" << std::endl;
    this->vf = roundf(n_float * (1 << this->nb));
}

Fixed& Fixed::operator=(const Fixed &cp)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->vf = cp.vf;
    return (*this);
}

std::ostream& operator<<(std::ostream &o, const Fixed &cp)
{
    o << cp.toFloat();
    return (o);
}

float Fixed::toFloat(void) const
{
    float x = (float)this->vf / (1 << this->nb);
    return (x);
}

int Fixed::toInt(void) const
{
    return(this->vf / (1 << this->nb));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 00:45:29 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/08/30 02:55:28 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->vf = 0;
}

Fixed::Fixed(Fixed const &cp)
{
    this->vf = cp.vf;
}

Fixed::Fixed(const int n_int)
{
    this->vf = n_int * (1 << this->nb);
}

Fixed::Fixed(const float n_float)
{
    this->vf = roundf(n_float * (1 << this->nb));
}

Fixed& Fixed::operator=(const Fixed &cp)
{
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
}

bool Fixed::operator>(const Fixed &o2)
{
    if (this->toFloat() > o2.toFloat())
        return (true);
    else
        return (false);
}

bool Fixed::operator>=(const Fixed &o2)
{
    if (this->toFloat() >= o2.toFloat())
        return (true);
    else
        return (false);
}

bool Fixed::operator<(const Fixed &o2)
{
    if (this->toFloat() < o2.toFloat())
        return (true);
    else
        return (false);
}

bool Fixed::operator<=(const Fixed &o2)
{
    if (this->toFloat() <= o2.toFloat())
        return (true);
    else
        return (false);
}

bool Fixed::operator==(const Fixed &o2)
{
    if (this->toFloat() == o2.toFloat())
        return (true);
    else
        return (false);
}

bool Fixed::operator!=(const Fixed &o2)
{
    if (this->toFloat() != o2.toFloat())
        return (true);
    else
        return (false);
}

Fixed Fixed::operator+(const Fixed &o2)
{
    float n = this->toFloat() + o2.toFloat();
    Fixed o(n);
    return (o);
}

Fixed Fixed::operator-(const Fixed &o2)
{
    float n = this->toFloat() - o2.toFloat();
    Fixed o(n);
    return (o);
}

Fixed Fixed::operator*(const Fixed &o2)
{
    float n = this->toFloat() * o2.toFloat();
    Fixed o(n);
    return (o);
    
}

Fixed Fixed::operator/(const Fixed &o2)
{
    float n = this->toFloat() / o2.toFloat();
    Fixed o(n);
    return (o);
}

Fixed Fixed::operator++()
{
    Fixed o;
    o.setvf(++this->vf);
    return (o);
}
Fixed Fixed::operator--()
{
    Fixed o;
    o.setvf(--this->vf);
    return (o);
}

Fixed Fixed::operator++(int)
{
    Fixed o;
    o.setvf(this->vf++);
    return (o);
}

Fixed Fixed::operator--(int)
{
    Fixed o;
    o.setvf(this->vf--);
    return (o);
}

Fixed& Fixed::min(Fixed& o1, Fixed& o2)
{
    if (o1.toFloat() < o2.toFloat())
        return o1;
    else
        return o2;
}

const Fixed& Fixed::min(const Fixed& o1, const Fixed& o2)
{
    if (o1.toFloat() < o2.toFloat())
        return o1;
    else
        return o2;
}

Fixed& Fixed::max(Fixed& o1, Fixed& o2)
{
    if (o1.toFloat() > o2.toFloat())
        return o1;
    else
        return o2;
}

const Fixed& Fixed::max(const Fixed& o1, const Fixed& o2)
{
    if (o1.toFloat() > o2.toFloat())
        return o1;
    else
        return o2;
}

void Fixed::setvf(int vf)
{
    this->vf = vf;
}
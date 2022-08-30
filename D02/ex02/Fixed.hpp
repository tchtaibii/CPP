/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:22:20 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/08/30 02:43:45 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int vf;
        static const int nb = 8;
    public:
        Fixed();
        Fixed(Fixed const &cp);
        Fixed(const int n_int);
        Fixed(const float n_float);
        float toFloat(void) const;
        int toInt(void) const;
        Fixed& operator=(const Fixed &cp);
        bool operator>(const Fixed &o2);
        bool operator>=(const Fixed &o2);
        bool operator<(const Fixed &o2);
        bool operator<=(const Fixed &o2);
        bool operator==(const Fixed &o2);
        bool operator!=(const Fixed &o2);
        Fixed operator+(const Fixed &o2);
        Fixed operator-(const Fixed &o2);
        Fixed operator*(const Fixed &o2);
        Fixed operator/(const Fixed &o2);
        Fixed operator++();
        Fixed operator++(int);
        Fixed operator--();
        Fixed operator--(int);
        static Fixed& min(Fixed& o1, Fixed& o2);
        static const Fixed& min(const Fixed& o1, const Fixed& o2);
        static Fixed& max(Fixed& o1, Fixed& o2);
        static const Fixed& max(const Fixed& o1, const Fixed& o2);
        void setvf(int vf);
        ~Fixed();
        
};

std::ostream& operator<<(std::ostream &o, const Fixed &cp);
#endif
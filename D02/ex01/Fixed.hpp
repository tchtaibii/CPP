/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:22:20 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/08/30 00:26:07 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

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
        ~Fixed();
        
};
std::ostream& operator<<(std::ostream &o, const Fixed &cp);
#endif
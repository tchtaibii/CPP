/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:22:20 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/08/21 02:45:16 by tchtaibi         ###   ########.fr       */
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
        Fixed(Fixed &cp);
        Fixed& operator=(const Fixed &cp);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );

};


#endif
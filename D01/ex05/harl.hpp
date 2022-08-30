/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 07:51:21 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/07/01 01:32:24 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl{
    private :
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public :
        Harl();
        void complain(std::string level);
};

#endif
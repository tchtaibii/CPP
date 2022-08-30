/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 03:41:13 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/06/29 07:19:24 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
#define HumanB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB{
    private :
        std::string name;
        Weapon *Weap;
    public :
        HumanB();
        HumanB(std::string name);
        void    setWeapon(Weapon &Weap);
        void    attack();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 03:41:15 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/06/28 04:17:24 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
}
HumanB::HumanB(std::string name)
{
    this->name = name;
}

void    HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->Weap->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &Weap)
{ 
    this->Weap = &Weap;
}
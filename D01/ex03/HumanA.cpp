/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 03:41:15 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/06/28 04:14:09 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA()
{
}
HumanA::HumanA(std::string name, Weapon &Weap)
{
    this->name = name;
    this->Weap = &Weap;
}

void    HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->Weap->getType() << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 03:36:27 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/06/28 03:57:16 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
}

Weapon::Weapon(std::string type){
    this->type = type;
}

std::string Weapon::getType(){
    return (this->type);
}

void        Weapon::setType(std::string type){
    this->type = type;
}
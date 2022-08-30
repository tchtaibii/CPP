/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 22:34:06 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/06/27 23:34:40 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

void    Zombie::setname(std::string name){
    this->name = name;
}

std::string Zombie::getname(){
    return(this->name);
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::Zombie(){
    
}
void    Zombie::announce(void){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

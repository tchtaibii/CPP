/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 22:54:59 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/06/27 23:34:40 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{
    Zombie *z1 = newZombie("Swarmer");
    Zombie *z2 = newZombie("Fader");
    z1->announce();
    z2->announce();
    delete z1;
    delete z2;
    randomChump("Ryuzaki");
}
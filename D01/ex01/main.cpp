/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 22:54:59 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/06/28 03:08:14 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{
    Zombie *z1 = ZombieHorde(80, "Swarmer");
    int i = -1;

    while (!(z1[++i].getname()).empty())
        z1[i].announce();
    delete [] z1;
}
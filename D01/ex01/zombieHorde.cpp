/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 23:14:34 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/06/27 23:34:40 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie* ZombieHorde(int N, std::string name)
{
    Zombie *zombies = new Zombie[N];
    int i = 0;
    while (N > i)
    {
        zombies[i].setname(name);
        i++;
    }
    return zombies;
}
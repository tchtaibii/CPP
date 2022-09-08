/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:50:45 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/09/08 23:05:12 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected :
        std::string type;
    public :
        Animal();
        Animal(const Animal& cp);
        virtual ~Animal();
        virtual void    makeSound() const = 0;
        std::string getType() const;
};


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:50:45 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/09/12 10:06:18 by tchtaibi         ###   ########.fr       */
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
        virtual void    makeSound() const;
        Animal();
        Animal(const Animal& cp);
        Animal& operator=(const Animal& cp);
        virtual ~Animal();
        std::string getType() const;
};


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:50:45 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/09/12 10:05:03 by tchtaibi         ###   ########.fr       */
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
class WrongAnimal
{
    protected :
        std::string type;
    public :
        void    makeSound() const;
        WrongAnimal();
        WrongAnimal(const WrongAnimal& cp);
        WrongAnimal& operator=(const WrongAnimal& cp);
        ~WrongAnimal();
        std::string getType() const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:54:05 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/09/06 23:55:47 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog& cp);
        Dog operator=(const Dog& cp);
        ~Dog();
        void makeSound() const;
};

class WrongDog : public WrongAnimal
{
    public:
        WrongDog();
        WrongDog(const WrongDog& cp);
        WrongDog operator=(const WrongDog& cp);
        ~WrongDog();
        void makeSound() const;
};

#endif
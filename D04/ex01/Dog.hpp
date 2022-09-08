/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:54:05 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/09/08 16:41:11 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *o;
    public:
        Dog();
        Dog(const Dog& cp);
        Dog operator=(const Dog& cp);
        ~Dog();
        void makeSound() const;
};


#endif
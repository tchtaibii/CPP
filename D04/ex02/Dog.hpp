/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:54:05 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/09/12 10:53:16 by tchtaibi         ###   ########.fr       */
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
        Dog& operator=(const Dog& cp);
        ~Dog();
        void makeSound() const;
        void setBrain(int index, std::string value);
        std::string getBrain(int index);
};


#endif
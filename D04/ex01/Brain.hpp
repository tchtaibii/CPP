/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:16:15 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/09/08 16:42:34 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain {
    private:
        std::string ideas[100];
    public:
        Brain();
        ~Brain();
        Brain(const Brain &cp);
        Brain operator=(const Brain &cp);   
};

#endif
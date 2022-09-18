/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:40:48 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/09/17 14:18:20 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat o(144, "Tom");
    std::cout << "***********************************"<< std::endl;
    try 
    {
        for (int i = 0; i < 150; i++)
        {
            std::cout << o << " (before) " << std::endl;
            // o.increment();
            o.decrement();
            std::cout << o << " (after) " << std::endl;
        }
    }
    catch (std::exception & x)
    {
        std::cout << x.what() << std::endl;
    }
    std::cout << "***********************************"<< std::endl;
}
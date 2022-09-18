/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:40:48 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/09/18 16:00:58 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat o(2, "Tom");
    Form form("death certificate", 100, 120);
    std::cout << form << std::endl;
    std::cout << "\n***********************************"<< std::endl;
    try 
    {
        form.beSigned(o);
        o.signForm(form);
    }
    catch (std::exception & x)
    {
        std::cout << x.what() << std::endl;
    }
    std::cout << "***********************************"<< std::endl;
}
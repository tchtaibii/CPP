/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:40:48 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/09/19 14:26:08 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat a(1, "B1");
    ShrubberyCreationForm b("Shrubbery");
    PresidentialPardonForm c("President");
    RobotomyRequestForm d("robot");
    std::cout << "******************" << std::endl;
    std::cout << a << std::endl;
    std::cout << "******************" << std::endl;
    std::cout << b << std::endl;
    std::cout << "******************" << std::endl;
    std::cout << c << std::endl;
    std::cout << "******************" << std::endl;
    std::cout << d << std::endl;
    std::cout << "******************" << std::endl;
    try 
    {
        b.beSigned(a);
        a.signForm(b);
        a.executeForm(b);
        std::cout << "******************" << std::endl;
        c.beSigned(a);
        a.signForm(c);
        a.executeForm(c);
        std::cout << "******************" << std::endl;
        d.beSigned(a);
        a.signForm(d);
        a.executeForm(d);
        std::cout << "******************" << std::endl;
    }
    catch (std::exception & x)
    {
        std::cout << x.what() << std::endl;
    }
    std::cout << "***********************************"<< std::endl;
}
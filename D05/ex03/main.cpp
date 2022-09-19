/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:40:48 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/09/19 14:52:26 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

void test_form()
{
    Intern someRandomIntern;
    Bureaucrat b(5, "Moha");
    Form* rrf;
    try 
    {
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        rrf->beSigned(b);
        b.signForm(*rrf);
        rrf->execute(b);
       
    }
    catch (std::exception & x)
    {
        std::cout << x.what() << std::endl;
    }
    delete rrf;
}
int main()
{
    test_form();
    // system("leaks Bureaucrat");
    std::cout << "***********************************"<< std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:40:48 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/09/17 21:15:42 by tchtaibi         ###   ########.fr       */
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
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    rrf->beSigned(b);
    b.signForm(*rrf);
    rrf->execute(b);
    
}
int main()
{
    try 
    {
        test_form();
    }
    catch (std::exception & x)
    {
        std::cout << x.what() << std::endl;
    }
    std::cout << "***********************************"<< std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:40:43 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/09/17 18:08:18 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default constructor (Bureaucrat)" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Distructor (Bureaucrat)" << std::endl;
}

Bureaucrat::Bureaucrat(const int n, const std::string name) : name(name)
{
    if (n < 1)
        throw GradeTooHighException();
    else if (n > 150)
        throw GradeTooLowException();
    else
        this->grade = n;
}

std::string Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void Bureaucrat::decrement()
{
    if (grade < 150 )
        this->grade += 1;
    else
        throw GradeTooLowException();
}

void Bureaucrat::increment()
{
    if (grade > 1 )
        this->grade -= 1;
    else
        throw GradeTooHighException();
}

void Bureaucrat::setGrade(const int grade)
{
    this->grade = grade;
}

std::ostream& operator<<(std::ostream &o, const Bureaucrat &cp)
{
    o << cp.getName() << ", bureaucrat grade " << cp.getGrade();
    return (o);
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
        return ("grade too Low");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("grade too High");
}

void Bureaucrat::signForm(const Form &form)
{
    if (form.get_sign() == true)
        std::cout << this->name << " signs " << form.get_name() << " to " << form.get_target() << std::endl;
    else
    {
        std::cout << this->name << " couldn't sign " << form.get_name();
        if (form.get_grade_to_sign() < this->getGrade())
            std::cout << " because grade is low" << std::endl;
        else
            std::cout << " because you should call (beSigned) before (signForm)" << std::endl;
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat& cp): name(cp.getName())
{
    this->grade = cp.getGrade();
    std::cout << "Copy constructor" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& cp)
{
    this->grade = cp.getGrade();
    std::cout << "Copy Assignment" << std::endl;
    return *this;
}

void Bureaucrat::executeForm(Form const & form)
{
    if (form.get_sign() == false)
        std::cout << "form not signed" << std::endl;
    else if (form.get_grade_to_exec() < this->grade)
        std::cout << "Low grade to execute this form" << std::endl;
    else
    {
        form.execute(*this);
        std::cout << this->name << " executed " << form.get_name() << std::endl;
    }
}

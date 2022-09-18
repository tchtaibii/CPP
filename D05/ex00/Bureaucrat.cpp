/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:40:43 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/09/18 15:41:09 by tchtaibi         ###   ########.fr       */
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

Bureaucrat::Bureaucrat(const Bureaucrat& cp)
{
    *this = cp;
    std::cout << "Copy constructor" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& cp)
{
    this->grade = cp.getGrade();
    std::cout << "Copy Assignment" << std::endl;
    return *this;
}
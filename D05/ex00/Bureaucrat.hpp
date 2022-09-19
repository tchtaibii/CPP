/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:40:46 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/09/19 14:12:51 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat {
    private: 
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& cp);
        Bureaucrat& operator=(const Bureaucrat& cp);
        Bureaucrat(const int n, const std::string name);
        void setGrade(const int grade);
        std::string getName() const;
        int getGrade() const;
        void increment();
        void decrement();
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException :public std::exception
        {
            public:
                const char *what() const throw();
        };
};
std::ostream& operator<<(std::ostream &o, const Bureaucrat &cp);

#endif
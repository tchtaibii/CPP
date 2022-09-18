#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private :
        const std::string name;
        bool s;
        const int grade_s;
        const int grade_x;
    public :
        Form();
        ~Form();
        Form(std::string name, int sign, int exec);
        Form(const Form & cp);
        Form & operator=(const Form & cp);
        std::string get_name() const;
        bool get_sign() const;
        int get_grade_to_sign() const;
        int get_grade_to_exec() const;
        void beSigned(const Bureaucrat &a);
        class GradeTooHighException : public std::exception
        {
            public :
                const char * what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public :
                const char * what() const throw();
        };
};

std::ostream& operator<<(std::ostream &o, const Form &cpp);

#endif
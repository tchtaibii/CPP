#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include <cstdlib>


class Bureaucrat;

class Form {
    private :
        const std::string name;
        bool s;
        const int grade_s;
        const int grade_x;
        std::string target;
    public :
        Form();
        virtual ~Form();
        Form(std::string name, int sign, int exec, std::string target);
        Form(const Form & cp);
        Form & operator=(const Form & cp);
        std::string get_name() const;
        bool get_sign() const;
        std::string get_target() const;
        int get_grade_to_sign() const;
        int get_grade_to_exec() const;
        void beSigned(const Bureaucrat &a);
        virtual void execute(Bureaucrat const & executor) const = 0;
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
        class not_signed : public std::exception
        {
            public :
                const char * what() const throw(){
                   return ("form not signed");
                };
        };
};

std::ostream& operator<<(std::ostream &o, const Form &cpp);

#endif
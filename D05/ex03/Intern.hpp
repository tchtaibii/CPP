#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"


class Intern
{
    private:
        Form *form[3];
    public:
        Intern();
        ~Intern();
        Intern(const Intern& cp);
        Intern& operator=(const Intern& cp);
        Form* makeForm(const std::string name_form, const std::string target_form);
};
#endif
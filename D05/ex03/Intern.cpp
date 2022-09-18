#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
    std::cout << "Default constructor (Intern)" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Distructor (Intern)" << std::endl;
}

Intern::Intern(const Intern& cp)
{
    *this = cp;
    std::cout << "Copy constructor" << std::endl;
}

Intern &Intern::operator=(const Intern& cp)
{
    this->form[0] = cp.form[0];
    this->form[1] = cp.form[1];
    this->form[2] = cp.form[2];
    std::cout << "Copy Assignment: " << std::endl;
    return *this;
}

Form* Intern::makeForm(const std::string name_form, const std::string target_form)
{
    this->form[0] = new PresidentialPardonForm(target_form);
    this->form[1] = new ShrubberyCreationForm(target_form);
    this->form[2] = new RobotomyRequestForm(target_form);
    for (int i = 0; i < 3; ++i)
    {
        if (this->form[i]->get_name() == name_form)
        {
            std::cout << "Intern creates " << this->form[i]->get_name() << std::endl;
            return this->form[i];
        }
    }
    std::cout << name_form << " don't exist " << std::endl;
    return NULL;
}
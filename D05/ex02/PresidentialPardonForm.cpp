#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "default constructor (PresidentialPardonForm)" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("presidential pardon", 25, 5, target)
{
    
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Distructor (PresidentialPardonForm)" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (get_sign() == false)
        throw not_signed();
    else if (executor.getGrade() > 5)
        throw GradeTooLowException();
    else
        std::cout << get_target() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & cp)
{
    *this = cp;
    std::cout << "Copy constructor" << std::endl;
}

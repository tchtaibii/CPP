#ifndef PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        void execute(Bureaucrat const & executor) const;
        PresidentialPardonForm(const PresidentialPardonForm & cp);
};

#endif
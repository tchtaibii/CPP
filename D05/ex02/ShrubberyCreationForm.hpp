#ifndef SHRUBBERYCREATIONFORM


#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor) const;
        ShrubberyCreationForm(const ShrubberyCreationForm & cp);
        
};

#endif
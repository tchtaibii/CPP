#ifndef ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        void execute(Bureaucrat const & executor) const;
        RobotomyRequestForm(const RobotomyRequestForm & cp);
};


#endif
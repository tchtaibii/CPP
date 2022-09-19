#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "default constructor (RobotomyRequestForm)" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request", 72, 45, target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Distructor (RobotomyRequestForm)" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (get_sign() == false)
        throw not_signed();
    else if (executor.getGrade() > 45)
        throw GradeTooLowException();
    else
        std::cout << get_target() << " has been robotomized successfully 50% of the time." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & a)
{
    *this = a;
    std::cout << "Copy constructor (RobotomyRequestForm)" << std::endl;
}
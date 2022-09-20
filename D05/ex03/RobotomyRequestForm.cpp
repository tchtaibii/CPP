#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request", 72, 45, target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Default constructor (RobotomyRequestForm)" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (get_sign() == false)
        throw not_signed();
    else if (executor.getGrade() > 45)
        throw GradeTooLowException();
    else
    {
        srand(time(NULL));
        std::cout << get_target();
        if  (rand() % 2)
            std::cout << " robotomy failed." << std::endl;
        else
            std::cout << " has been robotomized successfully"  << std::endl;
    }
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & a)
{
    *this = a;
    std::cout << "Copy constructor (RobotomyRequestForm)" << std::endl;
}
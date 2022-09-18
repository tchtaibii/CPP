#include "Form.hpp"

Form::Form() : name(""), grade_s(150), grade_x(150)
{
    std::cout << "Default constructor" << std::endl;
}
Form::~Form()
{
    std::cout << "Distructor (Form)" << std::endl;
}

Form::Form(std::string name, int sign, int exec, std::string target) : name(name), grade_s(sign), grade_x(exec)
{
    if (this->grade_s < 1 || this->grade_x < 1)
        throw GradeTooHighException();
    if (this->grade_s > 150 || this->grade_x > 150)
        throw GradeTooLowException();
    this->s = false;
    this->target = target;
}

std::string Form::get_name() const
{
    return this->name;
}

bool Form::get_sign() const
{
    return this->s;
}

int Form::get_grade_to_sign() const
{
    return grade_s;
}

int Form::get_grade_to_exec() const
{
    return grade_x;
}

void Form::beSigned(const Bureaucrat &a)
{
    if (a.getGrade() <= this->grade_s)
        this->s = true;
    else
        throw GradeTooLowException();
}

const char * Form::GradeTooLowException::what() const throw()
{
    return ("Grade Too low");
}

const char * Form::GradeTooHighException::what() const throw()
{
    return ("Grade Too High");
}

std::ostream& operator<<(std::ostream &o, const Form &cpp)
{
    o << cpp.get_name() ;
    o << " Form grade to sign ";
    o << cpp.get_grade_to_sign();
    o << " grade to execute ";
    o << cpp.get_grade_to_exec();
    if (cpp.get_sign())
        o << " is signed";
    o << " target ";
    o << cpp.get_target();
    return o;
}
Form::Form(const Form& cp): name(cp.get_name()), grade_s(cp.get_grade_to_sign()), grade_x(cp.get_grade_to_exec())
{
    this->s = cp.get_sign();
    this->target = cp.get_target();
    std::cout << "Copy constructor" << std::endl;
}

Form& Form::operator=(const Form& cp) 
{
    this->s = cp.get_sign();
    this->target = cp.get_target();
    std::cout << "Copy Assignment" << std::endl;
    return *this;
}

std::string Form::Form::get_target() const
{
    return this->target;
}
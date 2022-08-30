#include "contact.hpp"
#include "header.hpp"

Contact::Contact()
{
}

void Contact::setf_name(std::string  fname)
{
    this->f_name = fname;
}

void Contact::sets_name(std::string  sname)
{
    this->s_name = sname;
}

void Contact::setnickname(std::string  nickname)
{
    this->nickname = nickname;
}

void Contact::setdark(std::string  dark)
{
    this->dark = dark;
}

void Contact::setphone(std::string  phone)
{
    this->phone = phone;
}

void Contact::setindex(int index)
{
    this->index = index;
}

void Contact::sete(bool e)
{
    this->e = e;
}
std::string     Contact::getf_name()
{
    return(this->f_name);
}
std::string     Contact::gets_name()
{
    return (this->s_name);
}
std::string     Contact::getnickname()
{
    return (this->nickname);
}
int             Contact::getindex()
{
    return (this->index);
}
bool    Contact::getbool()
{
    return this->e;
}

std::string Contact::getdark()
{
    return (this->dark);
}

std::string Contact::getphone()
{
    return (this->phone);
}
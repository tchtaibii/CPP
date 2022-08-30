#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        int         index;
        bool         e;
        std::string	f_name;
        std::string	s_name;
        std::string nickname;
        std::string dark;
		std::string phone;
    public:
        Contact();
        void setf_name(std::string  fname);
        void sets_name(std::string  sname);
        void setnickname(std::string  nickname);
        void setdark(std::string  dark);
        void setphone(std::string  phone);
        void setindex(int index);
        void sete(bool e);
        std::string     getf_name();
        std::string     gets_name();
        std::string     getnickname();
        std::string     getphone();
        std::string     getdark();
        int             getindex();
        bool            getbool();
};

#endif
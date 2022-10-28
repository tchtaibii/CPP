#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>


template<class T>
class Array{
    private:
        T *element;
        unsigned int the_size;
    public:
        Array()
        {
            this->the_size = 0;
            this->element = nullptr;
        }
        Array(unsigned int n)
        {
            this->element = new T[n];
            this->the_size = n;
        }
        Array(const Array &cp)
        {
            this->element = nullptr;
            *this = cp;
        }
        ~Array()
        {
            delete[] this->element;
            std::cout << "deconstructor has been called" << std::endl;
        }
        unsigned int size() const {return this->the_size;}
        Array &operator=(const Array &cp)
        {
            if (this->element != nullptr)
                delete this->element;
            this->the_size = cp.size();
            this->element = new T[cp.size()];
            for (unsigned int i = 0; i < cp.size(); i++)
                this->element[i] = cp.getelement(i);
            return *this;
        }
        T &operator[](unsigned int index)
        {
            if  (index >= 0 && index <= this->the_size)
                return this->element[index];
            throw e_error();
        }
        void setelement(T ele, unsigned int index)
        {
            this->element[index] = ele;
        }
        T getelement(int i) const {return this->element[i];}
        class e_error : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return "error: index invalid!";
                }
        };
};




#endif
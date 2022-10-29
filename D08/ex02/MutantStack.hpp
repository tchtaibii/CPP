#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>
#include <iterator>
#include <algorithm>


template<class T>
class MutantStack : public std::stack<T>{
    public:
        MutantStack(){};
        ~MutantStack(){};
        MutantStack(MutantStack<T> &cp)
        {
            this = cp;
        }
        MutantStack<T> &operator=(MutantStack<T> &cp)
        {
            this->c = cp.c;
            return *this;
        }
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
        reverse_iterator rbegin()
        {
            return this->c.rbegin();
        }
        reverse_iterator rend()
        {
            return this->c.rend();
        }
    
};
#endif
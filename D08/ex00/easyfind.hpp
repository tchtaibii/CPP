#ifndef EASYFIND__HPP
#define EASYFIND__HPP

#include <exception>
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>


template <typename T>
void easyfind(T x, int y)
{
    // implementation
    typename T::iterator it = std::find(x.begin(), x.end(), y);
    if (it == x.end())
        throw std::runtime_error("Cannot find the occurencce\n");
    else
        std::cout << "occurrence find is : " << *it << std::endl;
}

#endif
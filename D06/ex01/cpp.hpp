#ifndef CPP_HPP
#define CPP_HPP


#include <iostream>

struct Data
{
    int num;
};

std::uintptr_t serialize(Data *ptr);
Data *deserialize(std::uintptr_t raw);

#endif
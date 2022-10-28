#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T> void swap(T &t1, T &t2){
    T tmp;
    tmp = t2;
    t2 = t1;
    t1 = tmp;
}

template<typename T>T max(const T &t1, const T &t2)
{
    if(t1 > t2)
        return t1;
    return t2;
}

template<typename T> T min(const T &t1, const T &t2)
{
    if(t1 < t2)
        return t1;
    return t2;
}

#endif
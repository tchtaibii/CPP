#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span{
    private:
        unsigned int N;
        std::vector<int> v;
        std::vector<int>::iterator it;
        int i;
        int min;
        int max;
    public:
        Span(unsigned int N);
        void addNumber(int number);
        unsigned int getvn();
        int get_min();
        int get_max();
        int longestSpan();
        int shortestSpan();
        void range_of_iterators(std::vector<int>::iterator b, std::vector<int>::iterator e);
};

#endif
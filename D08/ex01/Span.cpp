#include "Span.hpp"

Span::Span(unsigned int N)
{
    if(N <= 1)
        throw std::runtime_error("ERROR");
    this->N = N;
    this->v.reserve(N);
    this->i = 0;
    this->it = v.begin();
}

void Span::addNumber(int number)
{
    if (v.size() >= N)
        throw std::runtime_error("ERROR");
    v.push_back(number);
    sort(v.begin(), v.end());
    this->min = *v.begin();
    this->max = this->v[this->getvn() - 1];
    
}
unsigned int Span::getvn()
{
    return this->v.size();
}

int Span::get_min()
{
    if (this->getvn() <= 1)
        throw std::runtime_error("ERROR");
    return this->min;
}

int Span::get_max()
{
    if (this->getvn() <= 1)
        throw std::runtime_error("ERROR");
    return this->max;
}

int Span::longestSpan()
{
    if (this->getvn() <= 1)
        throw std::runtime_error("ERROR");
    return (get_max() - get_min());
}

int Span::shortestSpan()
{
    unsigned int i = 0;
    int shortestspan = v[1] - v[0];
    while (++i < this->getvn())
        if ((v[i] - v[i - 1]) < shortestspan)
            shortestspan = v[i] - v[i - 1];
    return shortestspan;
}

void Span::range_of_iterators(std::vector<int>::iterator b, std::vector<int>::iterator e)
{
    std::vector<int> t(b, e);
    if (this->N < t.size() + this->getvn())
        throw std::runtime_error("ERROR");
    this->v.insert(v.end(), t.begin(), t.end());
}
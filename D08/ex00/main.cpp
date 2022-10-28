#include "easyfind.hpp"

int main()
{
    try{
        std::vector<int> v;
        std::list<int> l;
        // stock in the vector
        v.push_back(0);
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(2);
        // stock in the list
        l.push_back(10);
        l.push_back(22);
        l.push_back(32);
        l.push_back(10);
        l.push_back(1);
        easyfind(l, 10);
    }
    catch(std::exception &x)
    {
        std::cout << x.what();
    }
}
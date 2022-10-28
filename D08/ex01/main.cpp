#include "Span.hpp"

int main()
{
    
    try{
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::cout << "*****************************" << std::endl;
        /// ********* /////////
        std::vector<int> tmp;
        tmp.push_back(12);
        tmp.push_back(6);
        tmp.push_back(89);
        tmp.push_back(43);
        tmp.push_back(78);
        tmp.push_back(693);
        tmp.push_back(159);
        tmp.push_back(32);
        Span s = Span(98);
        s.range_of_iterators(tmp.begin(), tmp.end());
        s.addNumber(55);
        std::cout << s.shortestSpan() << std::endl;
        std::cout << s.longestSpan() << std::endl;
        return 0;
    }
    catch(std::exception& e){
        std::cout << e.what() << std::endl;
    }
}
#include "cpp.hpp"
int main()
{
    Data *ptr = new Data();
    std::uintptr_t u;
    
    ptr->num = 400;
    std::cout << ptr->num << std::endl;
    u = serialize(ptr);
    std::cout << u << std::endl;
    ptr = deserialize(u);
    std::cout << ptr->num << std::endl;
    delete ptr;

}
#include <iostream>
#include <iomanip>

int main()
{
    int i = 0;
    while (i < 5)
    {
        std::cout << i << "|" << std::setw(5);
        i++;
    }
    
}
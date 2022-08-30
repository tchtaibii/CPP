#include <iostream>
#include <cmath>
int main()
{
    float n = 1212.22f;
    int r = n * (1 << 8);
    std::cout << "10 shift is  = " << r << std::endl;
    float f = (float)r / (float)(1  << 8);
    std::cout << "reshift  = " << f << std::endl;
}
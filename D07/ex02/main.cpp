#include "Array.hpp"

int main(void)
{
    {
        std::cout << "************** CLASS TO CHAR *************" << std::endl;
        char src[] = "taha";
        int size = 4;
        // declaration
        Array<char> str(5);
        Array<char> str1;
        // infectation 
        for (int i = 0; i < size; i++)
            str.setelement(src[i], i);
        // output str and Subscripting [] Operator
        std::cout << "******** str 1 ********" << std::endl;
        std::cout << "size of str : " << str.size() << std::endl;
        for (int i = 0; i < size; i++)
            std::cout << str[i];
        std::cout << std::endl;
        std::cout << "******** str 2 ********" << std::endl;
        std::cout << "assignment operator copy test" << std::endl;
        //  assignment operator copy test
        str1 = str;
        std::cout << "size of str2 : " << str1.size() << std::endl;
        // output assignment operator copy and Subscripting [] Operator
        for (int i = 0; i < size; i++)
            std::cout << str[i];
        std::cout << std::endl;
        // copy constructor test
        Array<char> str2(str1);
        std::cout << "******** str 3 ********" << std::endl;
        std::cout << "copy constructor test" << std::endl;
        std::cout << "size of str3 : " << str2.size() << std::endl;
        // size function test
        for (unsigned int i = 0; i < str1.size(); i++)
            std::cout << str2[i];
        std::cout << std::endl;
        try {
            std::cout << str2[10]  << std::endl;
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << "\n\n************** CLASS TO CHAR *************" << std::endl;
        int src[] = {1, 5, 2, 3};
        int size = 4;
        // declaration
        Array<int> tab(size);
        Array<int> tab1;
        // infectation 
        for (int i = 0; i < size; i++)
            tab.setelement(src[i], i);
        // output str and Subscripting [] Operator
        std::cout << "******** tab 1 ********" << std::endl;
        std::cout << "size of tab : " << tab.size() << std::endl;
        for (int i = 0; i < size; i++)
            std::cout << tab[i];
        std::cout << std::endl;
        std::cout << "******** tab 2 ********" << std::endl;
        std::cout << "assignment operator copy test" << std::endl;
        //  assignment operator copy test
        tab1 = tab;
        std::cout << "size of tab2 : " << tab1.size() << std::endl;
        // output assignment operator copy and Subscripting [] Operator
        for (int i = 0; i < size; i++)
            std::cout << tab[i];
        std::cout << std::endl;
        // copy constructor test
        Array<int> tab2(tab1);
        std::cout << "******** tab 3 ********" << std::endl;
        std::cout << "copy constructor test" << std::endl;
        std::cout << "size of tab3 : " << tab2.size() << std::endl;
        // size function test
        for (unsigned int i = 0; i < tab1.size(); i++)
            std::cout << tab2[i];
        std::cout << std::endl;
        try {
            std::cout << tab2[10]  << std::endl;
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
}
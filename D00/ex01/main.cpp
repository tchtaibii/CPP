/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:38:48 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/07/05 01:25:25 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string stock_in(std::string out)
{
    std::string str;
    std::cout << out;
    while (str.empty())
        getline(std::cin, str);
    return str;
}

int ft_isdigit(std::string str)
{
    int i = 0;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return 0;
        i++;
    }
    return 1;
}

void ft_text()
{
    std::cout << "\n \a" << std::endl;
    std::cout << "██████╗░██╗░░██╗░█████╗░███╗░░██╗███████╗██████╗░░█████╗░░█████╗░██╗░░██╗  ░█████╗░░█████╗░██╗░██████╗" << std::endl;
    std::cout << "██╔══██╗██║░░██║██╔══██╗████╗░██║██╔════╝██╔══██╗██╔══██╗██╔══██╗██║░██╔╝  ██╔══██╗██╔══██╗╚█║██╔════╝" << std::endl;
    std::cout << "██████╔╝███████║██║░░██║██╔██╗██║█████╗░░██████╦╝██║░░██║██║░░██║█████═╝░  ╚█████╔╝██║░░██║░╚╝╚█████╗░" << std::endl;
    std::cout << "██████╔╝███████║██║░░██║██╔██╗██║█████╗░░██████╦╝██║░░██║██║░░██║█████═╝░  ╚█████╔╝██║░░██║░╚╝╚█████╗░" << std::endl;
    std::cout << "██╔═══╝░██╔══██║██║░░██║██║╚████║██╔══╝░░██╔══██╗██║░░██║██║░░██║██╔═██╗░  ██╔══██╗██║░░██║░░░░╚═══██╗" << std::endl;
    std::cout << "██╔═══╝░██╔══██║██║░░██║██║╚████║██╔══╝░░██╔══██╗██║░░██║██║░░██║██╔═██╗░  ██╔══██╗██║░░██║░░░░╚═══██╗" << std::endl;
    std::cout << "██║░░░░░██║░░██║╚█████╔╝██║░╚███║███████╗██████╦╝╚█████╔╝╚█████╔╝██║░╚██╗  ╚█████╔╝╚█████╔╝░░░██████╔╝" << std::endl;
    std::cout << "╚═╝░░░░░╚═╝░░╚═╝░╚════╝░╚═╝░░╚══╝╚══════╝╚═════╝░░╚════╝░░╚════╝░╚═╝░░╚═╝  ░╚════╝░░╚════╝░░░░╚═════╝░" << std::endl;
    
    std::cout << "\n\n";
    sleep(1);
}

void    ft_upthanteen(std::string str)
{
    int i = -1;
    
    while (++i < 9)
        std::cout << str[i];
    std::cout << ".";
    std::cout << " | ";
}

void    ft_print(std::string str)
{
    int c = 0;

    if (str.length() <= 10)
    {
        c = 13 - str.length();
        std::cout << str;
        std::cout << std::setw(c);
        std::cout << " | ";
    }
    else
        ft_upthanteen(str);
}

std::string command_choose()
{
    std::string n;

    std::cout << "YOU HAVE THREE COMMAND YOU CAN CHOOSE\n";
    std::cout << "--   ----   \n";
    std::cout << "1 | ADD    |\n";
    std::cout << "2 | SEARCH |\n";
    std::cout << "3 | EXIT   |\n";
    std::cout << "--   ----   \n";
    usleep(100);
    std::cout << "I WANT : ";
    getline(std::cin, n);
    std::cout << "\n";
    return n;
}

int main()
{
    std::string choose;
    int i;
    int k;
    int f;
    std::string str;

    PhoneBook list;
    i = 0;
    ft_text();
    std::cout << "\nWELCOM TO YOUR PHONEBOOK :" << std::endl;
    usleep(100);
    choose = command_choose();
    while(1)
    {
        if (!choose.compare("ADD") || !choose.compare("1") || !choose.compare("add"))
        {
            if (i == 8)
                i = 0;
            list.o[i].setindex(i);
            list.o[i].sete(true);
            list.o[i].setf_name(stock_in("FIRST NAME : "));
            list.o[i].sets_name(stock_in("LAST NAME : "));
            list.o[i].setnickname(stock_in("NICKNAME : "));
            list.o[i].setphone(stock_in("PHONE NUMBER : "));
            list.o[i].setdark(stock_in("DARKEST SECRET : "));
            std::cout << "\n";
            i++;
        }
        else if (!choose.compare("SEARCH") || !choose.compare("2") || !choose.compare("search"))
        {
            std::cout << "---------------------------------------------------"<< std::endl;
            std::cout << "INDEX     "<< " | " << "FIRST NAME" << " | " << "LAST NAME " << " | " << "NICKNAME  " << " |\n";
            std::cout << "---------------------------------------------------"<< std::endl;
            if(list.o[0].getbool())
            {
                k = 0;
                while (k < 8)
                {
                    if(list.o[k].getbool())
                    {
                        std::cout << list.o[k].getindex();
                        std::cout << std::setw(12);
                        std::cout << " | ";
                        ft_print(list.o[k].getf_name());
                        ft_print(list.o[k].gets_name());
                        ft_print(list.o[k].getnickname());
                        std::cout << "\n---------------------------------------------------"<< std::endl;
                    }
                  k++;
                }
                std::cout << "ENTER INDEX OF A CONTACT U WANT : ";
                getline(std::cin, str);
                if (ft_isdigit(str))
                {
                    std::stringstream (str) >> f;
                    if (f >= 0 && f <= 7)
                    {
                        if (list.o[f].getbool() == true)
                        {
                            std::cout << "\n\nFIRST NAME : " << list.o[f].getf_name() << std::endl;
                            std::cout << "LAST NAME : " << list.o[f].gets_name() << std::endl;
                            std::cout << "NICKNAME : " << list.o[f].getnickname() << std::endl;
                            std::cout << "PHONE NUMBER : " << list.o[f].getphone() << std::endl;
                            std::cout << "DARKEST SECRET : " << list.o[f].getdark() << std::endl;
                            std::cout << "\n";
                        }
                        else
                            std::cout << "\n\n**INDEX EMPTY**\n";
                    }
                    else
                        std::cout << "\n\n**INDEX NOT EXIST**\n";
                }
                else
                    std::cout << "\n\n**INDEX IS A NUMBER**\n";
                sleep(1);
            }
            std::cout << "\n";
        }
        else if (!choose.compare("EXIT") || !choose.compare("3") || !choose.compare("exit"))
            exit(1);
        choose = command_choose();
    }
}

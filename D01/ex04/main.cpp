/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:35:17 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/06/30 02:19:35 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fcntl.h>
#include <fstream>
#include <string.h>

std::string ft_replace(std::string s1, std::string s2, std::string buffer, int pos)
{
    int i = -1;
    int j = 0;
    if (pos == std::string::npos)
        return NULL;
    int lenght_s1 = s1.length();
    buffer.erase(pos, s1.length());
    buffer.insert(pos, s2);
    return (buffer);
}

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::string filename, s1, s2, buffer;
        std::string newfile = filename + ".replace";
        (filename = av[1] , s1 = av[2] , s2 = av[3]);
        std::fstream f_input;
        f_input.open(filename, std::ios::in);
        if (!f_input)
            return 0;
        while (getline(f_input, buffer));
        f_input.close();
        int pos;
        while ((pos = buffer.find(s1)) != std::string::npos)
            buffer = ft_replace(s1, s2, buffer, pos);
        std::cout << buffer;
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 03:10:36 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/06/28 03:29:22 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main()
{
    std::string str =  "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "ADDRESS OF STR : " << &str << std::endl;
    std::cout << "ADDRESS OF STRINGPTR : " << &stringPTR << std::endl;
    std::cout << "ADDRESS OF STRINGREF : " << &stringREF << std::endl;
    std::cout << "VALUE OF STR : " << str << std::endl;
    std::cout << "VALUE OF STRINGPTR : " << stringPTR << std::endl;
    std::cout << "VALUE OF STRINGREF : " << stringREF << std::endl;
}
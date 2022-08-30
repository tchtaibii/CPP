/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 22:08:32 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/07/01 01:47:43 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

Harl::Harl(){
    
}

void Harl::debug( void )
{
    std::cout << "\"DEBUG\" level: Debug messages contain contextual information. They are mostly used for problem diagnosis.\nExample: \"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\"\n" << std::endl;
}

void Harl::info( void )
{
    std::cout << "\"INFO\" level: These messages contain extensive information. They are helpful for tracing program execution in a production environment.\nExample: \"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\"" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "\"WARNING\" level: Warning messages indicate a potential issue in the system. However, it can be handled or ignored.\nExample: \"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\"" << std::endl;
}

void Harl::error( void )
{
    std::cout << "\"ERROR\" level: These messages indicate an unrecoverable error has occurred. This is usually a critical issue that requires manual intervention.\nExample: \"This is unacceptable! I want to speak to the manager now.\"" << std::endl;
}

void Harl::complain(std::string level)
{
    std::string tmp[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*f[4])(void);
    f[0] = &Harl::debug;
    f[1] = &Harl::info;
    f[2] = &Harl::warning;
    f[3] = &Harl::error;
    for (int i = 0; i < 4; i++)
        if (!level.compare(tmp[i]))
            (this->*f[i])();
}

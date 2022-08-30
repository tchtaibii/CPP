/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 18:46:36 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/06/20 16:39:42 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	main(int ac, char **av)
{
	int	i;
	int	j = 0;

	if (ac > 1)
	{
		while (av[++j])
		{
			i = -1;
			while (av[1][++i])
			{
				if (av[j][i] >= 'a' && av[j][i] <= 'z')
					av[j][i] -= 32;
			}
			std::cout << av[j];
		}    
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	return 0;   
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 18:12:55 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/22 19:14:43 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc, char **argv)
{
	if (argc < 2 || argc > 2)
	{
		std::cout << "Wrong number of arguments\n";
		return 1;
	}
	std::string arg = argv[1];
	Harl harl;
	switch (harl.levelInd(arg))
	{
		case 0:
		case 1:
			harl.complain("DEBUG");
			harl.complain("INFO");
			break;
		case 2:
		case 3:
			harl.complain("WARNING");
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;
	}
	return 0;
}

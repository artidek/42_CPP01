/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 18:12:55 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/22 18:15:27 by aobshatk         ###   ########.fr       */
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
	harl.complain(arg);
	return 0;
}

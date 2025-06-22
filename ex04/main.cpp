/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 12:10:57 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/22 13:10:07 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fman.hpp"

int main(int argc, char **argv)
{
	if (argc < 4)
	{
		std::cout << "Wrong number of arguments\n";
		return 1;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	Fman test(filename);
	test.replace(s1, s2);
	return 0;
}

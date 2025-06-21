/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 19:06:00 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/21 19:33:47 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie* one = newZombie("Shawn");
	Zombie*	two = newZombie("Paul");
	Zombie*	three = newZombie("Sussana");

	std::cout << "Pointer: ";
	one->announce();
	std::cout << "Pointer: ";
	two->announce();
	std::cout << "Pointer: ";
	three->announce();
	std::cout << "These are from function" << std::endl;
	randomChump("Sara");
	randomChump("Gary");
	randomChump("Hungry Bill");
	delete one;
	delete two;
	delete three;
	return 0;
}

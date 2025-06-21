/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 19:52:30 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/21 20:43:05 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde (int N, std::string name)
{
	if (N < 0)
	{
		std::cout << "N out of range" << std::endl;
		return NULL;
	}
	void*	classArrPtr = ::operator new(sizeof(Zombie) * N);
	Zombie*	horde = static_cast<Zombie*>(classArrPtr);
	for (int i = 0; i < N; i++)
	{
		new (&horde[i]) Zombie(name);
	}
	return (horde);
}

int	main (void)
{
	int	N = 10;
	Zombie* horde = zombieHorde(N, "zombie");

	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	for (int i = 0; i < N; i++)
	{
		horde[i].~Zombie();
	}
	::operator delete(horde);
	return 0;
}

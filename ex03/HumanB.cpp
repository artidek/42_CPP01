/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 22:17:34 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/22 00:32:46 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weaponB(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	if (_weaponB)
		std::cout << _name << " attacks with their " << _weaponB->getType() << std::endl;
	else
		std::cout << _name << " attacks without weapon" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->_weaponB = &weapon;
}

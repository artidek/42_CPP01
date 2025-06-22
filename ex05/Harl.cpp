/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 16:57:36 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/22 18:17:02 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	_keyArr[0].key = "DEBUG";
	_keyArr[0].funcPTR = &Harl::debug;
	_keyArr[1].key = "INFO";
	_keyArr[1].funcPTR = &Harl::info;
	_keyArr[2].key = "WARNING";
	_keyArr[2].funcPTR = &Harl::warning;
	_keyArr[3].key = "ERROR";
	_keyArr[3].funcPTR = &Harl::error;
}

Harl::~Harl(void)
{
}

void Harl::debug (void)
{
	std::cout << "DEBUG level: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info(void)
{
	std::cout << "INFO level: I cannot believe adding extra bacon costs more money. "
	<< "You didn't putenough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void Harl::warning(void)
{
	std::cout << "WARNING level: I think I deserve to have some extra bacon for free. "
	<< "I've been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
	std::cout << "ERROR level: This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (_keyArr[i].key.compare(level)== 0)
		{
			(this->*(_keyArr[i].funcPTR))();
			return;
		}
	}
	std::cout << "Wrong level value\n";	
}

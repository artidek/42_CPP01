/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 16:33:59 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/22 18:58:59 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <iostream>
#include <string>


class Harl
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	struct keyValues
	{
		std::string key;
		void (Harl::*funcPTR)(void);
	};
	keyValues _keyArr [4];
public:
	Harl(void);
	~Harl(void);
	void complain(std::string level);
	int levelInd(std::string level);
};

#endif

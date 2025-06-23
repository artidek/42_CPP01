/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fman.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 11:01:49 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/23 10:39:18 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FMAN_H
#define FMAN_H

#include <iostream>
#include <fstream>
#include <string>
#include <ios>

class	Fman
{
	private:
		std::string _fname;
		std::string _NewFname;
		void _copyContent(void);
		const std::string _findAndReplace(std::string str, std::string fStr, std::string rStr);
	public:
		Fman(std::string& fname);
		~Fman(void);
		void replace(std::string& s1, std::string& s2);
};

#endif

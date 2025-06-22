/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fman.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 11:20:04 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/22 13:09:24 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fman.hpp"

Fman::Fman(std::string& fname)
{
	std::fstream file;

	file.open(fname.c_str(), std::ios::in | std::ios::out);
	if (file.is_open())
	{
		_fname = fname;
		_NewFname = fname.append("_copy");
		file.close();
		_copyContent();
	}
	else
	{
		file.close();
		std::cout << "Failed to open a file" << std::endl;
		std::invalid_argument("Failed to open a file");
	}
}

Fman::~Fman(void)
{
}

void Fman::replace(std::string& s1, std::string& s2)
{
	std::fstream file;
	std::fstream newFile;
	std::string buf;

	file.open(_fname.c_str(), std::ios::in | std::ios::out | std::ios::trunc);
	newFile.open(_NewFname.c_str(), std::ios::in);
	while (std::getline(newFile, buf))
	{
		if (buf.compare(s1) == 0)
			file << s2 << std::endl;
		else
			file << buf << std::endl;
	}
	file.close();
	newFile.close();
}
void Fman::_copyContent(void)
{
	std::fstream newFile;
	std::fstream file;
	std::string buf;

	newFile.open(_NewFname.c_str(), std::ios::out);
	file.open(_fname.c_str(), std::ios::in);
	while (std::getline(file, buf))
	{
		newFile << buf << std::endl;
	}
	newFile.close();
	file.close();
}

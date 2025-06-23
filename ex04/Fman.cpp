/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fman.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 11:20:04 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/23 15:37:13 by aobshatk         ###   ########.fr       */
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
		file << _findAndReplace(buf, s1, s2) << std::endl;
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

const std::string Fman::_findAndReplace(std::string str, std::string fStr, std::string rStr)
{
	size_t	pos = 0;
	size_t lastPos = 0;
	int found = 0;
	std:: string retStr;

	if (str.size() < fStr.size() || str.empty())
		return str;
	while ((pos = str.find(fStr, lastPos)) != std::string::npos)
	{
		found = 1;
		if (retStr.empty())
		{
			if (pos == 0)
				retStr += rStr;
			else
			{
				retStr += str.substr(0, pos);
				retStr += rStr;
			}
		}
		else
		{
			retStr += str.substr(lastPos, pos - lastPos);
			retStr += rStr;
		}
		lastPos = pos + fStr.size();
	}
	if (lastPos + 1 < str.size() && found)
	{
		retStr += str.substr(lastPos);
	}
	if (!found)
		retStr += str;
	return retStr;
}

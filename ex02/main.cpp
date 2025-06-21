/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 20:57:04 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/21 21:12:53 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	var = "HI THIS IS BRAIN";
	std::string*	stringPTR = &var;
	std::string	&stringREF = var;

	std::cout << "string variable address: " << &var <<std::endl;
	std::cout << "string pointer address: " << &stringPTR <<std::endl;
	std::cout << "string reference address: " << &stringREF << std::endl; 
	std::cout << "string variable value: " << var << std::endl;
	std::cout << "string pointer value: " << *stringPTR << std::endl;
	std::cout << "string reference value: " << stringREF << std::endl;
	return 0;
}

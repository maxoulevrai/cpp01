/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 22:12:06 by root              #+#    #+#             */
/*   Updated: 2026/06/27 19:24:30 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void) {
	std::string	call = "HI THIS IS BRAIN";
	std::string *stringPTR = &call;
	std::string &stringREF = call;

	std::cout << "string address: " << &call << std::endl;
	std::cout << "stringPTR address: " << &stringPTR << std::endl;
	// std::cout << "stringPTR address: " << stringPTR << std::endl;
	std::cout << "stringREF address: " << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << "string value: " << call << std::endl;
	std::cout << "stringPTR pointed value: " << *stringPTR << std::endl;
	std::cout << "stringREF pointed value: " << stringREF << std::endl;

	return (0);
}

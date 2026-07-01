/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 21:10:09 by root              #+#    #+#             */
/*   Updated: 2026/07/01 18:56:05 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>
#include <cstring>
#include <algorithm>

void	search_and_replace(std::ifstream &file, char **av) {
	std::string 	s1(av[2]);
	std::string 	s2(av[3]);
	std::string		line;
	std::string		all;
	char			*new_filename;

	new_filename = strcat(av[1], ".replace");
	std::ofstream	new_file(new_filename);

	while (std::getline(file, line))
		all += line;
	std::string::iterator	it;
	while (true)
	{
		it = find(all.begin(), all.end(), s1[0]);
		if (it = all.end())
			

	}
	
	
	


}

int	main(int ac, char **av) {
	if (ac != 4)
		return (std::cerr << "Usage: ./ft_sed <filename> <s1> <s2>" << std::endl, 1);
	std::ifstream	file(av[1]);
	if (!file) 
		return (std::cerr << "fichier '" << av[1] << "' introuvable" << std::endl, 1);
	search_and_replace(file, av);
	return (0);
}
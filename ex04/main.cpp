/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 21:10:09 by root              #+#    #+#             */
/*   Updated: 2026/07/03 11:58:04 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

void	search_and_replace(std::ifstream &file, char **av) {
	std::string 	s1(av[2]);
	std::string 	s2(av[3]);
	std::string		line;
	std::string		new_filename;
	std::size_t		pos;

	if (s1.empty())
		return ;

	new_filename = std::string(av[1]) + ".replace";
	std::ofstream	new_file(new_filename.c_str());

	while (std::getline(file, line)) {
		pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos) {
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.size());
			pos += s2.size();
		}
		new_file << line;
		if (!file.eof())
			new_file << std::endl;
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
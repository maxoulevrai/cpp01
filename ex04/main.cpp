/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 21:10:09 by root              #+#    #+#             */
/*   Updated: 2026/06/24 22:05:39 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>
#include <cstring>

void	search_and_replace(std::ifstream &file, char **av) {
	std::string 	s1(av[2]);
	std::string 	s2(av[3]);
	std::string		mot;
	char			*new_filename;

	new_filename = strcat(av[1], ".replace");
	std::ofstream	new_file(new_filename);

	while (file >> mot) {
		if (mot == s1)
			new_file << s2;
		else
			new_file << mot;
		while (true) {
			char c = file.peek();
			if (c == EOF) {
				new_file.close();
				file.close();
				return ;
			}
			else if (!isspace(c))
				break ;
			new_file << c;
			file.ignore(1);
		}

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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 22:12:06 by root              #+#    #+#             */
/*   Updated: 2026/06/27 20:24:41 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

int	main(int ac, char **av) {
	if (ac != 3)
		return (1);
	randomChump(av[1]);
	Zombie	*zozo = newZombie(av[2]);
	zozo->announce();
	delete(zozo);
	return (0);
}

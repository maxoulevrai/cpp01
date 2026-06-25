/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 22:12:06 by root              #+#    #+#             */
/*   Updated: 2026/06/24 21:50:31 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

int	main(void) {
	randomChump("yeye");
	Zombie	*zozo = newZombie("zozo");
	zozo->announce();
	delete(zozo);
	return (0);
}
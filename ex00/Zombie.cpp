/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 22:07:13 by root              #+#    #+#             */
/*   Updated: 2026/06/08 22:39:38 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string &_name) {
	this->_name = _name;
	std::cout << "Zombie " << _name << " created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << this->_name << " destroyed" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ" << std::endl;
}

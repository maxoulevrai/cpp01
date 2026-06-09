/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 01:00:06 by root              #+#    #+#             */
/*   Updated: 2026/06/09 02:28:59 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _arm(NULL) {
}

HumanB::~HumanB() {}

void	HumanB::attack(void) {
	if (this->_arm)
		std::cout << this->_name << " attacks with their " << this->_arm->getType() << std::endl;
	else
		std::cout << this->_name << " attacks with their bare hands" << std::endl;
}

void	HumanB::setWeapon(Weapon &arm) {
	this->_arm = &arm;
}


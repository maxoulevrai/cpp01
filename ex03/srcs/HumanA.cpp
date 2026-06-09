/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 01:00:06 by root              #+#    #+#             */
/*   Updated: 2026/06/09 02:25:10 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &arm) : _name(name), _arm(arm) {
}

HumanA::~HumanA() {}

void	HumanA::attack(void) {
	std::cout << this->_name << " attacks with their " << this->_arm.getType() << std::endl;
}

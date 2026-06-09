/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 00:47:38 by root              #+#    #+#             */
/*   Updated: 2026/06/09 02:25:55 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon() {
	
}

Weapon::Weapon(const std::string type) {
		this->_type = type;
}

Weapon::~Weapon() {}

std::string&	Weapon::getType() {
	return (this->_type);
}

void			Weapon::setType(const std::string& type) {
	this->_type = type;
}

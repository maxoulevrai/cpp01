/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 00:43:34 by root              #+#    #+#             */
/*   Updated: 2026/06/09 02:25:47 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {
	private:
		std::string	_type;
	public:
		Weapon();
		Weapon(const std::string type);
		~Weapon();
		std::string&	getType();
		void			setType(const std::string& type);
};

#endif
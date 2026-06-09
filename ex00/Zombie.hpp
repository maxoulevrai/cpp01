/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 22:01:38 by root              #+#    #+#             */
/*   Updated: 2026/06/08 22:50:31 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
	private:
		std::string	_name;
	public:
		Zombie(const std::string &_name);
		~Zombie();
		void	announce(void);
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif
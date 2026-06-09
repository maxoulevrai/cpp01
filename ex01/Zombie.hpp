/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 22:01:38 by root              #+#    #+#             */
/*   Updated: 2026/06/08 23:35:58 by root             ###   ########.fr       */
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
		Zombie();
		Zombie(const std::string &_name);
		~Zombie();
		void	setName(const std::string &name);
		void	announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:29:46 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/26 19:07:02 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <iostream>

class Zombie {
	public:

		Zombie();
		~Zombie();

		void	setName(std::string name);
		void	announce() const;

	private:

		std::string	name;

};

Zombie*	zombieHorde(int N, std::string name);

#endif

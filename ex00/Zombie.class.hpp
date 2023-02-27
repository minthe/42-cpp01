/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:29:46 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/27 19:03:59 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <iostream>

class Zombie {

	public:

		Zombie(std::string name);
		~Zombie();

		void	announce() const;

	private:

		const std::string	_name;

};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif

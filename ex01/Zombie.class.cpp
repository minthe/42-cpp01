/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:29:07 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/27 11:47:09 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"
#include <iostream>

Zombie::Zombie() {
	_countZombies++;
	this->_nbZombie = _countZombies;
}

Zombie::~Zombie()
{
	std::cout << this->_name << this->_nbZombie << " destroyed." << std::endl;
	return;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
	return;
}

void	Zombie::announce() const
{
	std::cout << this->_name << this->_nbZombie << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

int Zombie::_countZombies = 0;

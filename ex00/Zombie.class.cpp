/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:29:07 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/26 18:10:27 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"
#include <iostream>

Zombie::Zombie() {}

Zombie::~Zombie()
{
	std::cout << "Zombie: " << this->name << " destroyed." << std::endl;
	return;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
	return;
}

void	Zombie::announce() const
{
	std::cout << this->name + ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

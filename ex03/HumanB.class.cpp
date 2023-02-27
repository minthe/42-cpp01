/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:37:16 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/27 18:33:27 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.class.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _Weapon(NULL), _name(name) {}
HumanB::~HumanB() {}

void	HumanB::attack()
{
	if (!this->_Weapon)
	{
		std::cout
			<< this->_name
			<< " attacks with their hands"
			<< std::endl;
		return;
	}
	std::cout
		<< this->_name
		<< " attacks with their "
		<< this->_Weapon->getType()
	<< std::endl;
	return;
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	this->_Weapon = &newWeapon;
	return;
}

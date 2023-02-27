/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:37:16 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/27 16:57:45 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.class.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& newWeapon) : _Weapon(newWeapon), _name(name) {}
HumanA::~HumanA() {}

void	HumanA::attack()
{
	std::cout
		<< this->_name
		<< " attacks with their "
		<< this->_Weapon.getType()
	<< std::endl;
	return;
}

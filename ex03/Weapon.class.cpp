/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:15:59 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/28 15:53:27 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.class.hpp"
#include <iostream>

Weapon::Weapon(std::string newType) : _type(newType) {}
Weapon::~Weapon() {}

std::string const&	Weapon::getType()
{
	return (this->_type);
}

void	Weapon::setType(std::string newType)
{
	this->_type = newType;
	return;
}

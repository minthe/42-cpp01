/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:15:59 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/27 16:43:56 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.class.hpp"
#include <iostream>

Weapon::Weapon(std::string newType) : _type(newType) {}
Weapon::~Weapon() {}

std::string	Weapon::getType()
{
	std::string&	typeREF = this->_type;
	return (typeREF);
}

void	Weapon::setType(std::string newType)
{
	this->_type = newType;
	return;
}

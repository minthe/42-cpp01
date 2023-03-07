/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:29:27 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/06 23:53:13 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"
#include <iostream>

Harl::Harl() {
	// std::cout << "Harl constructed" << std::endl;
	return;
}

Harl::~Harl() {
	// std::cout << "Harl deconstructed" << std::endl;
	return;
}

int	Harl::_getLevel(std::string input)
{
	std::string levels[4] = { "debug", "info", "warning", "error" };

	for (int i = 0; i < 4; i++)
		if (levels[i] == input)
			return (i);
	return (-1);
}

void	Harl::complain(std::string level)
{
	switch (this->_getLevel(level))
	{
		case -1:
		{
			std::cout << "nothing to complain" << std::endl;
			break;
		}
		case 0:
			this->_debug();
		case 1:
			this->_info();
		case 2:
			this->_warning();
		case 3:
			this->_error();
	}
	return;
}

void	Harl::_debug()
{
	std::cout
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- "
		<< "ketchup burger. I really do!"
	<< std::endl;
	return;
}

void	Harl::_info()
{
	std::cout
		<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon"
		<< " in my burger! If you did, I wouldn’t be asking for more!"
	<< std::endl;
	return;
}

void	Harl::_warning()
{
	std::cout
		<< "I think I deserve to have some extra bacon for free. I’ve been coming "
		<< "for years whereas you started working here since last month."
	<< std::endl;
	return;
}

void	Harl::_error()
{
	std::cout
		<< "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
	return;
}

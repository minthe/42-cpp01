/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:29:27 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/06 14:09:14 by vfuhlenb         ###   ########.fr       */
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

void	Harl::complain(std::string level)
{
	// initizalize pointer to class member
	void	(Harl::*debug)(void);
	void	(Harl::*info)(void);
	void	(Harl::*warning)(void);
	void	(Harl::*error)(void);

	// declare member function to cmfp pointers
	debug = &Harl::_debug;
	info = &Harl::_info;
	warning = &Harl::_warning;
	error = &Harl::_error;

	// creating arrays for pointers and string literals
	void (Harl::*complain[4])(void) = { debug, info, warning, error };
	std::string levels[4] = { "debug", "info", "warning", "error" };

	// comparing input parameter with pointer array
	for (int i = 0; i < 4; i++)
		if (level == levels[i])
		{
			(this->*complain[i])();
			return;
		}
	std::cout << "nothing to complain" << std::endl;
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
		<< "I think I deserve to have some extra bacon for free. I’ve been coming"
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

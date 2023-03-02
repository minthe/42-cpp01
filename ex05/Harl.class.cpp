/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:29:27 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/02 17:20:12 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"
#include <iostream>

Harl::Harl() {
	std::cout << "Harl constructed" << std::endl;
}

Harl::~Harl() {
	std::cout << "Harl deconstructed" << std::endl;
}

void	Harl::complain(std::string level)
{
	if (level == "debug")
		this->debug();
	return;
}

void	Harl::debug(void)
{
	std::cout
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- "
		<< "ketchup burger. I really do!"
	<< std::endl;
	return;
}

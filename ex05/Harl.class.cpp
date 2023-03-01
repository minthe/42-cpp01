/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:29:27 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/01 20:29:52 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void	complain(std::string level)
{
	
}

void	debug(void)
{
	std::cout
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- "
		<< "ketchup burger. I really do!"
	<< std::endl;
	return;
}

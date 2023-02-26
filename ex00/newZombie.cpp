/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:15:08 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/26 18:05:18 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie*	newZombie = new Zombie();

	newZombie->setName(name);
	newZombie->announce();
	return (newZombie);
}

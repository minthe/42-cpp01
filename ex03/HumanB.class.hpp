/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:23:43 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/27 18:33:31 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANB_CLASS_H
# define HUMANB_CLASS_H

#include "Weapon.class.hpp"
#include <iostream>

class HumanB {

	public:

		HumanB(std::string name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &newWeapon);

	private:

		Weapon*		_Weapon;
		std::string	_name;

};

#endif

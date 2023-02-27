/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:23:43 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/27 16:58:20 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANA_CLASS_H
# define HUMANA_CLASS_H

#include "Weapon.class.hpp"
#include <iostream>

class HumanA {

	public:

		HumanA(std::string name, Weapon & newWeapon);
		~HumanA();
		void	attack();

	private:

		Weapon&		_Weapon;
		std::string	_name;

};

#endif

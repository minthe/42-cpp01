/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:06:37 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/28 15:53:11 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H

#include <iostream>

class Weapon {

	public:

		Weapon(std::string newType);
		~Weapon();

		std::string	const&	getType();
		void				setType(std::string newType);

	private:

		std::string		_type;

};

#endif

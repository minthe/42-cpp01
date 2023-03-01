/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:29:26 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/01 20:30:02 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HARL_CLASS_H
# define HARL_CLASS_H

#include <iostream>

class Harl {

	public:

		void	complain(std::string level);

	private:

		void	debug(void);
		// void	info(void);
		// void	warning(void);
		// void	error(void);

};

#endif

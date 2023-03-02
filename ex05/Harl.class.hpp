/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:29:26 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/02 15:16:16 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HARL_CLASS_H
# define HARL_CLASS_H

#include <iostream>

class Harl {

	public:

		Harl();
		~Harl();
		void	complain(std::string level);

	private:

		void	debug(void);
		// void	info(void);
		// void	warning(void);
		// void	error(void);

};

#endif

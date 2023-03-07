/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:29:26 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/06 23:51:27 by vfuhlenb         ###   ########.fr       */
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

		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);
		int		_getLevel(std::string input);

};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:46:40 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/07 18:41:50 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

int	main()
{
	{
		std::cout << "\nTest 1 (debug)" << std::endl;
		Harl harl;
		harl.complain("debug");
	}

	{
		std::cout << "\nTest 2 (warning)" << std::endl;
		Harl harl;
		harl.complain("warning");
	}
	{
		std::cout << "\nTest 3 (unknown token)" << std::endl;
		Harl harl;
		harl.complain("unknown token");
	}
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:50:38 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/27 13:45:58 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string* strPTR = &str;
	std::string& strREF = str;

	std::cout << "\nstr:\t" << &str << "\nstrPTR:\t" << strPTR << "\nstrREF:\t" << &strREF << std::endl;
	std::cout << "\nstr:\t" + str + "\nstrPTR:\t" + *strPTR + "\nstrREF:\t" + strREF << std::endl;

	// *strPTR = "Hi this is Brain";

	// std::cout << "\nstr:\t" << &str << "\nstrPTR:\t" << strPTR << "\nstrREF:\t" << &strREF << std::endl;
	// std::cout << "\nstr:\t" + str + "\nstrPTR:\t" + *strPTR + "\nstrREF:\t" + strREF << std::endl;

	// strREF = "Hi this is \U0001F9E0";

	// std::cout << "\nstr:\t" << &str << "\nstrPTR:\t" << strPTR << "\nstrREF:\t" << &strREF << std::endl;
	// std::cout << "\nstr:\t" + str + "\nstrPTR:\t" + *strPTR + "\nstrREF:\t" + strREF << std::endl;

	return 0;
}

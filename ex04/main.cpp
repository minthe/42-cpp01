/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 19:24:58 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/28 19:18:57 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

void	search_and_replace(std::string line, char const *s1, char const *s2)
{

	// filename.append(".replace");
	// text.insert(5, argv[2]);
	// std::ofstream ofs(file.append(".replace"));
	// ofs << text;
	// std::cout << text << std::endl;
}

int	main(int argc, char **argv)
{
	std::ifstream	file;
	std::string		line;
	std::string		s1;
	std::string		s2;

	if (argc != 4)
	{
		std::cerr
			<< RED << "\n3 arguments needed: a filename and two strings\n" << RESET
		<< std::endl;
		return (0);
	}

	file.open(argv[1]);
	if ((file.rdstate() & std::ifstream::failbit) != 0 )
	{
		std::cerr
			<< RED << "Error opening: " << argv[1] << RESET
		<< std::endl;
		return (0);
	}

	std::cout << GREEN << "running..." << RESET << std::endl;
	while ()
	search_and_replace(line, argv[2], argv[3]);
	return 0;
}

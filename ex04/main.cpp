/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 19:24:58 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/01 01:00:29 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

// outputs error message to stderr and returns 1
static int	error_msg(std::string s1, std::string s2)
{
	std::cerr << RED << s1 << s2 << RESET << std::endl;
	return (1);
}

// replaces s1 with s2 in line - and writes line to inputfile.replace
static void	search_and_replace(std::string line, char const *s1, char const *s2)
{
	std::cout << GREEN << line << s1 << s2 << RESET << std::endl;
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

	// error handling
	if (argc != 4)
		return (error_msg("3 arguments needed: a filename and two strings", ""));
	file.open(argv[1]);
	if ((file.rdstate() != 0 || std::ifstream::failbit) != 0 ) // if ((file.rdstate() & std::ifstream::failbit) != 0 )
		return (error_msg("Error opening: ", argv[1]));

	// read lines until eof
	while (!file.eof())
	{
		std::getline(file, line);
		search_and_replace(line, argv[2], argv[3]); // TODO file.replace in main oder in subfunction?
	}
	return 0;
}

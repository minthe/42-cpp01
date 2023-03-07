/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 19:24:58 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/07 18:35:43 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <sstream>

#define RED "\033[31;1m"
#define GREEN "\033[32;1m"
#define RESET "\033[0m"

// outputs error message to flag 0=stdout 1=stderr and returns flag
static int	print_message(std::string s1, std::string s2, int flag)
{
	if (flag == 1)
		std::cerr << RED << s1 << s2 << RESET << std::endl;
	else
		std::cerr << s1 << GREEN << s2 << RESET << std::endl;
	return (flag);
}

// replaces s1 with s2 in line - and writes line to inputfile.replace
static std::string	search_and_replace(const std::string buffer, const std::string s1, const std::string s2)
{
	std::string	new_content;
	std::size_t	pos = 0;

	new_content = buffer;
	while (new_content[pos])
	{
		if (pos == new_content.find(s1) && s1.empty() != true)
		{
			new_content.erase(pos, s1.length());
			new_content.insert(pos, s2);
			pos += s2.length() - 1;
		}
		pos++;
	}
	return (new_content);
}

int	main(int argc, char **argv)
{
	std::ifstream		file;
	std::stringstream	buffer;
	std::ofstream		new_file;
	std::string			new_name;

	// input-file handling
	if (argc != 4)
		return (print_message("Error arguments: provide a filename and two strings", "", 1));
	file.open(argv[1]);
	if ((file.rdstate() & std::ifstream::failbit) != 0 )
		return (print_message("Error opening: ", argv[1], 1));

	// output-file handling
	new_name = argv[1];
	new_name.append(".replace");
	const char*	new_file2 = new_name.c_str();
	new_file.open(new_file2);
	if ((new_file.rdstate() & std::ifstream::failbit) != 0 )
		return (print_message("Error creating: ", new_name, 1));

	// replace
	buffer << file.rdbuf();
	new_file << search_and_replace(buffer.str(), argv[2], argv[3]);
	return (print_message("successfully created: ", new_name, 0));
}

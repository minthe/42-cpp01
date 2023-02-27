/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:34:47 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/27 11:46:32 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

#define NUMBER 50

int	main()
{
	Zombie* zHorde = zombieHorde(NUMBER, "Zombi");

	for (int index = 0; index < NUMBER; index++)
		zHorde[index].announce();
	delete [] zHorde;
	return 0;
}

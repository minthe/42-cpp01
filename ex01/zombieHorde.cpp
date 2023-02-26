/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:06:31 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/26 23:47:43 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	zombieHorde = new Zombie[N];

	for (int index = 0; index < N; index++)
	{
		zombieHorde[index].setName(name);
		zombieHorde[index].announce();
	}
	return (zombieHorde);
}

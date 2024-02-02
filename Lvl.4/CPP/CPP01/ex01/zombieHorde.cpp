/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 20:35:45 by oscarmathot       #+#    #+#             */
/*   Updated: 2023/12/31 23:59:42 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.h"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*horde;
	int	i;

	horde = new Zombie[N];
	i = 0;
	while (i < N)
	{
		// std::cout << i << "created" << std::endl;
		horde[i].setName(name);
		// horde[i].announce();
		// horde[i] = newZombie(name);
		i++;
	}
	return (horde);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 20:20:46 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/01/01 00:07:24 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.h"

int	main()
{
	const int		NB_ZMBIES = 10;
	Zombie	*horde;
	Zombie	*temp;
	int		i = 0;

	horde = NULL;
	temp = NULL;
	horde = zombieHorde(NB_ZMBIES, "HORDE");
	while (i < NB_ZMBIES)
	{
		horde[i].announce();
		i++;
	}
	while (i < NB_ZMBIES)
	{
		(*temp) = horde[i];
		delete (temp);
		temp += sizeof(Zombie);
		i++;
	}
	horde = NULL;
    return (0);
}

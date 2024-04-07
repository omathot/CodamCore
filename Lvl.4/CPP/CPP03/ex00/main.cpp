/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 02:06:49 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 02:21:03 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int	main()
{
	ClapTrap	trap = ClapTrap("Trapster");
	ClapTrap	chad = ClapTrap("Chad");

	trap.attack("John");
	trap.takeDamage(4);
	trap.beRepaired(2);
	std::cout << chad.get_name() << " entered the room!" << std::endl;
	chad.attack("Trapster");
	chad.attack("Trapster");
	chad.takeDamage(1);
	chad.beRepaired(1000);
	return (0); 
}
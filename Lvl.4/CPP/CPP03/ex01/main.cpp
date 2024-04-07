/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 02:06:49 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 13:09:33 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"

int	main()
{
	ClapTrap	trap ("Trapster");
	ClapTrap	chad ("Chad");
	ScavTrap	sus ("Sus");

	trap.attack("John");
	trap.takeDamage(4);
	trap.beRepaired(2);
	std::cout << chad.get_name() << " entered the room!" << std::endl;
	chad.attack("Trapster");
	chad.attack("Trapster");
	chad.takeDamage(1);
	chad.beRepaired(1000);
	std::cout << chad.get_name() << " entered the room!" << std::endl;
	sus.attack("chad");
	sus.takeDamage(10);
	sus.guardGate();
	sus.beRepaired(10);
	return (0); 
}
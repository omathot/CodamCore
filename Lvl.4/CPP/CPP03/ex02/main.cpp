/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 02:06:49 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 14:36:10 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

int	main()
{
	ClapTrap	chad ("Chad");
	ScavTrap	sus ("Sus");
	FragTrap	tod ("Tod");

	chad.attack("sus");
	chad.attack("sus");
	chad.takeDamage(1);
	chad.beRepaired(1000);
	sus.attack("chad");
	sus.takeDamage(10);
	sus.guardGate();
	sus.beRepaired(10);
	tod.attack("sus");
	tod.highFivesGuys();
	tod.takeDamage(10);
	tod.beRepaired(10);
	return (0); 
}
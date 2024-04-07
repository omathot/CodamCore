/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 02:06:49 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 15:28:29 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"
#include "DiamondTrap.h"

int	main()
{
	FragTrap	frag("frag");
	DiamondTrap	diamond("diamond");
	
	std::cout << "\n";
	frag.attack("diamond");
	frag.takeDamage(10);
	frag.beRepaired(10);
	frag.highFivesGuys();
	std::cout << "\n";
	diamond.attack("frag");
	diamond.WhoAmI();
	diamond.takeDamage(10);
	diamond.beRepaired(10);
	std::cout << "\n";
	return (0); 
}
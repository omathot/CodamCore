/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 01:58:52 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 02:23:32 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(std::string name) {
	Name = name;
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
	std::cout << "Constructed ClapTrap " << Name << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructing ClapTrap " << Name << std::endl;
}

void	ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " << Name << " attacks " << target << " causing " << AttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << Name << " takes " << amount << " of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << Name << " heals for " << amount << " health!" << std::endl;
}

std::string	ClapTrap::get_name() {
	return (Name);
}
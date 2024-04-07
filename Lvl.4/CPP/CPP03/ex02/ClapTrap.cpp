/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 01:58:52 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 13:07:07 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(std::string name) {
	Name = name;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
	std::cout << "Constructed ClapTrap " << Name << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Deconstructing ClapTrap " << Name << std::endl;
}

void	ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " << Name << " attacks " << target << " causing " << AttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << Name << " takes " << amount << " damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << Name << " heals for " << amount << " health!" << std::endl;
}

std::string	ClapTrap::get_name() {
	return (Name);
}
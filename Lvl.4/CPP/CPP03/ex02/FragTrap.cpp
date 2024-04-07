/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 13:18:24 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 14:37:57 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

FragTrap::FragTrap(std::string name) : ClapTrap (name) {
	this->Name = name;
	this->AttackDamage = 30;
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	std::cout << "Constructed FragTrap " << Name << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "deconstructing FragTrap " << this->Name << std::endl;
}

void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->Name	<< " successfuly high fived!" << std::endl;
}

void	FragTrap::attack(const std::string &target) {
	std::cout << "FragTrap " << this->Name << " attacks " << target << " causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount) {
	std::cout << "FragTrap " << this->Name << " takes " << amount << " damage!" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount) {
	std::cout << "FragTrap " << this->Name << " heals for " << amount << " health!" << std::endl;
}
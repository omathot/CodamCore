/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 02:26:28 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 14:38:42 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

// void	ClapTrap::ClapInit(std::string name) {
// 	// Name = name;
// 	// HitPoints = 100;
// 	// EnergyPoints = 50;
// 	// AttackDamage = 20;
// 	// std::cout << "Constructed ScavTrap " << Name << std::endl;
// }

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->HitPoints = 100;
	this->AttackDamage = 20;
	this->Name = name;
	this->EnergyPoints = 50;
	std::cout << "Constructed ScavTrap " << Name << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "deconstructing ScavTrap " << get_name() << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << get_name() << " entered gate keeper mode!" << std::endl;
}

void	ScavTrap::attack(const std::string &target) {
	std::cout << "ScavTrap " << this->Name << " attacks " << target << " causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	std::cout << "ScavTrap " << this->Name << " takes " << amount << " damage!" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount) {
	std::cout << "ScavTrap " << this->Name << " heals for " << amount << " health!" << std::endl;
}
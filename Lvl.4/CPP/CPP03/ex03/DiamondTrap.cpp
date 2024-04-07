/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 14:58:09 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 15:07:22 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.h"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name) {
	this->Name = name;
	this->ClapTrap::Name = name + "_clap_name";
	FragTrap::HitPoints = 100;
	ScavTrap::EnergyPoints = 50;
	FragTrap::AttackDamage = 30;
	std::cout << "Constructed DiamondTrap " << Name << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "deconstructing DiamondTrap " << this->Name << std::endl;
}

void DiamondTrap::WhoAmI() {
	std::cout << "DiamondTrap name : " << this->Name << "; ClapTrap name : " << this->ClapTrap::Name << std::endl;
}
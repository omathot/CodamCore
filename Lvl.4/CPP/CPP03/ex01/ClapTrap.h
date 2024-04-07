/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 01:58:55 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 13:09:44 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

#include <stdio.h>
#include <iostream>

class ClapTrap
{
private:

protected:
	std::string	Name;
	int	HitPoints;
	int	EnergyPoints;
	int	AttackDamage;

public:

	ClapTrap(std::string name);
	virtual ~ClapTrap();
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
	std::string	get_name();
};

#endif
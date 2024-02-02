/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 12:12:48 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/01/01 23:40:00 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.h"

class HumanA
{
private:
	std::string	_name;
	Weapon	&_weapon;  // Reference to Weapon

public:
	HumanA(const std::string& name, Weapon& weapon) : _name(name), _weapon(weapon) {}
	void attack() const;
};

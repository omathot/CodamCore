/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 12:24:52 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/01/01 13:59:29 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.h"

class HumanB
{
private:
	std::string	_name;
	Weapon	*_weapon;  // Pointer to Weapon, can be nullptr

public:
	HumanB(const std::string &name) : _name(name), _weapon(nullptr) {}
	void setWeapon(Weapon &weapon);
	void attack() const;
};
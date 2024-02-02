/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 12:29:01 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/01/01 13:58:20 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

void	HumanB::setWeapon(Weapon &type)
{
	this->_weapon = &type;
}

void	HumanB::attack() const
{
	if (_weapon)
		std::cout << _name << " attacks with " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " has no weapon." << std::endl;
}

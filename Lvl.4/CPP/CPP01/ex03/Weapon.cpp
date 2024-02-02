/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 12:28:34 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/01/01 13:57:59 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

std::string	Weapon::getType() const
{
	return (_type);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}

Weapon::~Weapon()
{
	std::cout << "weapon disarmed" << std::endl;
}
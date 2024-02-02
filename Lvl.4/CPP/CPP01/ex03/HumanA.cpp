/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 12:28:50 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/01/01 23:42:53 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

void	HumanA::attack() const
{
        std::cout << _name << " attacks with " << _weapon.getType() << std::endl;
}

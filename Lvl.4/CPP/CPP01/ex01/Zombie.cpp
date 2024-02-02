/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:40:51 by oscarmathot       #+#    #+#             */
/*   Updated: 2023/12/31 23:44:18 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.h"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

std::string	Zombie::getName()
{
	// std::cout << _name << std::endl;
	return (this->_name);
}

Zombie::~Zombie()
{
	std::cout << _name << " destroyed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

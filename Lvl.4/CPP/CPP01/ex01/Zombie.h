/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:40:12 by oscarmathot       #+#    #+#             */
/*   Updated: 2023/12/31 23:57:43 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>

const std::string DEFAULT_ZOMBIE_NAME = "DEFAULT";
class Zombie
{
private:
	std::string	_name;

public:
	void	announce(void);
	Zombie() : _name(DEFAULT_ZOMBIE_NAME){};
	Zombie(std::string name) : _name(name){};
	~Zombie();
	std::string	getName();
	void setName(std::string name) {this->_name = name;};
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
Zombie	*zombieHorde(int N, std::string name);
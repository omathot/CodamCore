/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:40:12 by oscarmathot       #+#    #+#             */
/*   Updated: 2023/12/29 20:21:38 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>

class Zombie
{
private:
	std::string	_name;

public:
	void	announce(void);
	Zombie(std::string	name) : _name(name){}
	~Zombie();
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
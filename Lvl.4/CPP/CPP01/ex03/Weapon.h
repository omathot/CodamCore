/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 12:05:18 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/01/01 13:57:56 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class	Weapon
{
private:
	std::string	_type;

public:
	Weapon(std::string type) : _type(type){}
	~Weapon();
	std::string	getType() const;
	void	setType(std::string type);
} ;

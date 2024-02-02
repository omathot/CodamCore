/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:06:23 by oscarmathot       #+#    #+#             */
/*   Updated: 2023/12/31 23:28:17 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.h"

// It creates a zombie, name it, and return it so you can use it outside of the function scope.
Zombie	*newZombie(std::string name)
{
	return (new Zombie(name));
}

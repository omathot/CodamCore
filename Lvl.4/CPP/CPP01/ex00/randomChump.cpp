/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:34:04 by oscarmathot       #+#    #+#             */
/*   Updated: 2023/12/29 20:19:33 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.h"

// It creates a zombie, names it, and the zombie announces itself.
void	randomChump(std::string name)
{
	Zombie z(name);
	z.announce();
}

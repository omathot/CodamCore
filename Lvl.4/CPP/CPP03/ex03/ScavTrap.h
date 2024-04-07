/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 02:23:40 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 15:23:58 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

# include "ClapTrap.h"

class ScavTrap : virtual public ClapTrap
{
private:
	
public:
	ScavTrap(std::string name);
	~ScavTrap();

	void	guardGate();
	void 	attack(const std::string& target);
};

#endif
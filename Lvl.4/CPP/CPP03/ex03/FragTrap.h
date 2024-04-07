/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 13:14:54 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 15:24:13 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

# include "ClapTrap.h"

class FragTrap : virtual public ClapTrap {

private:
	/* data */

public:
	FragTrap(std::string name);
	~FragTrap();

	void highFivesGuys(void);
	
};

#endif


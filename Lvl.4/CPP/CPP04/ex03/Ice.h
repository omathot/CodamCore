/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 20:01:38 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 23:20:57 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ICE_H
# define ICE_H

# include "AMateria.h"

class Ice : public AMateria {

private:
	/* data */

public:
	Ice(void);
	~Ice();

	void				use(ICharacter &target);
	AMateria*			clone() const;

};

#endif
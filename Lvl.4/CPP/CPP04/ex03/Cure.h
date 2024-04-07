/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 19:53:18 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 23:21:02 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CURE_H
# define CURE_H

# include "AMateria.h"

class Cure : public AMateria {

private:
	/* data */

public:
	Cure(void);
	~Cure();

	void				use(ICharacter &target);
	AMateria*			clone() const;
	
};

#endif
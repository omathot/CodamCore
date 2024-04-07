/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 21:31:48 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/07 15:08:08 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "IMateriaSource.h"

class MateriaSource : public IMateriaSource
{

protected:
	AMateria *_inventory[4];

public:
	MateriaSource(void);
	~MateriaSource();
	MateriaSource(const MateriaSource &src);
	MateriaSource& operator=(const MateriaSource &src);

	void		learnMateria(AMateria *m);
	AMateria*	createMateria(std::string const & type);
	void		outputInventory();

};

#endif
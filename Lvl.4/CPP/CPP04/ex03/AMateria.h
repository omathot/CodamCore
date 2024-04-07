/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 19:34:14 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/07 12:12:45 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AMATERIA_H
# define AMATERIA_H

# include <stdio.h>
# include <iostream>
// # include "ICharacter.h"

class ICharacter;

class AMateria {

private:
	std::string	_type;

public:
	AMateria(std::string const &type);
	AMateria(void);
	virtual ~AMateria();

	std::string const &getType() const; //Returns the materia type

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	
};

#endif
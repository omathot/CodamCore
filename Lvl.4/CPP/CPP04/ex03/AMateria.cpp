/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 20:00:44 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/07 12:12:42 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.h"
// #include "ICharacter.h"

AMateria::AMateria(void) : _type("") {
	std::cout << "AMateria void constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) {
	std::cout << type << " AMateria constructor called" << std::endl;
	this->_type = type;
}

AMateria::~AMateria() {
	std::cout << "AMateria deconstructor called" << std::endl;
}

std::string const	&AMateria::getType() const {
	return (this->_type);
}

void	AMateria::use(ICharacter &target) {
	std::cout << "Amateria use function" << std::endl;
}
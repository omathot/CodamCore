/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 21:35:41 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/07 15:48:39 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.h"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
	std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &src) {
	std::cout << "MateriaSource copy operator called" << std::endl;
	// for (int i = 0; i < 4; i++) {
	// 	this->_inventory[i] = NULL;
	// }
	*this = src;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
	std::cout << "MateriaSource deconstructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &src) {
	if (this != &src) {
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i] != NULL)
				delete this->_inventory[i];
			if (src._inventory[i] != NULL)
				this->_inventory[i] = src._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m) {
	if (m == NULL) {
		std::cout << "Not storing a null Materia in my inventory that's useless" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL) {
			// std::cout << "LearnMateria added to inventory at idx " << i << std::endl;
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << "!! Full MateriaSource inventory, deleting received AMateria: " << m->getType() << std::endl;
	delete m;
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] != NULL) {
			if (this->_inventory[i]->getType() == type) {
				AMateria *toReturn = this->_inventory[i]->clone();
				// std::cout << "CreateMateria returning " << this->_inventory[i]->getType() << std::endl;
				return (toReturn);
			}
		}
	}
	std::cout << "Could not find the Materia in MateriaSource inventory" << std::endl;
	return (NULL);
}

void	MateriaSource::outputInventory() {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i])
			std::cout << "MateriaSource inventory idx: " << i << "; Materia type: " << this->_inventory[i]->getType() << std::endl;
	}
}
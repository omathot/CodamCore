/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 20:43:40 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/07 15:37:14 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.h"

Character::Character(const std::string &name) : _name(name) {
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	for (int i = 0; i < 50; i++)
		this->_listDiscarded[i] = NULL;
	std::cout << this->_name << " Character constructor called" << std::endl;
}

Character::Character(const Character &src) : _name(src._name) {
	std::cout << this->_name << " Character copy constructor called" << std::endl;
	// for (int i = 0; i < 3; i++)
	// 	this->_inventory[i] = NULL;
	// for (int i = 0; i < 49; i++)
	// 	this->_listDiscarded[i] = NULL;
	*this = src;
}

Character&	Character::operator=(const Character &src) {
	if (this != &src) {
		this->_name = src._name;
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i] != NULL) {
				delete this->_inventory[i];
				this->_inventory[i] = NULL;
			}
			if (src._inventory[i] != NULL)
				this->_inventory[i] = src._inventory[i]->clone();
		}
		for (int i = 0; i < 50; i++) {
			if (this->_listDiscarded[i] != NULL) {
				delete this->_listDiscarded[i];
				this->_listDiscarded[i] = NULL;
			}
			if (src._listDiscarded[i] != NULL)
				this->_listDiscarded[i] = src._listDiscarded[i]->clone();
		}
	}
	return (*this);
}

Character::~Character() {
	std::cout << this->_name << " Character deconstructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i]) {
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
	for (int i = 0; i < 50; i++) {
		if (this->_listDiscarded[i]) {
			delete this->_listDiscarded[i];
			this->_listDiscarded[i] = NULL;
		}
	}
}

void	Character::equip(AMateria *m) {
	if (m == NULL) {
		std::cout << "Can't equip null Materia, how am I supposed to use that" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL) {
			std::cout << "Character " << this->_name << " equipped " << m->getType() << " at inventory idx: " << i << std::endl;
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << "Full inventory, deleting received AMateria : " << m->getType() << std::endl;
	delete m;
	m = NULL;
}

void	Character::unequip(int idx) {
	if (this->_inventory[idx] == NULL) {
		std::cout << "Nothing to unequip at Inventory index:" << idx << std::endl;
		return ;
	}
	for (int i = 0; i < 50; i++) {
		if (this->_listDiscarded[i] == NULL) {
			std::cout << "inventory index [" << idx << "]: " << this->_inventory[idx]->getType() << " unequipped and added to listDiscarded at idx: " << i << std::endl;
			this->_listDiscarded[i] = this->_inventory[idx];
			this->_inventory[idx] = NULL;
			return ;
		}
	}
	std::cout << "You're pushing the eval too far mate, this one won't be saved" << std::endl;
	delete this->_inventory[idx];
	this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target) {
	if (this->_inventory[idx] == NULL) {
		std::cout << "No Materia to use at Inventory index:" << idx << std::endl;
		return ;
	}
	this->_inventory[idx]->use(target);
}

const std::string	&Character::getName() const {
	return (this->_name);
}

void	Character::outputDiscardList() {
	for (int i = 0; i < 50; i++) {
		if (this->_listDiscarded[i] != NULL)
			std::cout << _listDiscarded[i]->getType() << " in discardList at idx: " << i << std::endl;
	}
}
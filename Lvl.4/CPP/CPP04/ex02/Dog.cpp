/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:41:30 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 19:27:27 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

Dog::Dog() : AAnimal("Dog") {
	std::cout << "Constructing " << this->type << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &src) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "Deconstructing " << this->type << std::endl;
}

Dog& Dog::operator=(const Dog &src) {
	std::cout << "Dog copy called" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
		this->brain = new Brain(*src.brain);
	}
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "Woof Woof" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 17:07:26 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 17:15:38 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.h"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal") {
	std::cout << "Void constructor for " << this->type << std::endl;
}

WrongAnimal::WrongAnimal(std::string name) {
	this->type = name;
	std::cout << "Constructing with string for" << this->type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Deconstructing " << this->type << std::endl;
}

void	WrongAnimal::makeSound() const{
	std::cout << "WrongAnimal sound screech screech" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return (this->type);
}
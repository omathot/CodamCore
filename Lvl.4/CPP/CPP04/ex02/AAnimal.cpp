/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:39:40 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 19:28:56 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.h"

AAnimal::AAnimal(std::string name) {
	type = name;
	std::cout << this->type << " AAnimal constructor called" << std::endl;
	// std::cout << "Constructing animal class from given string" << std::endl;
}

AAnimal::AAnimal(void) : type("Animal") {
    std::cout << "Void constructor for " << this->type << std::endl;
}

AAnimal::AAnimal(const AAnimal& src) {
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = src;
}

AAnimal::~AAnimal() {
	std::cout << "Deconstructing animal class" << std::endl;
}

void	AAnimal::makeSound() const {
	std::cout << "AAnimal class sound called" << std::endl;
}

std::string	AAnimal::getType() const {
	return (this->type);
}
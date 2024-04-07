/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:39:40 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 16:54:07 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Animal::Animal(std::string name) {
	type = name;
	std::cout << "Constructing animal class from given string" << std::endl;
}

Animal::Animal(void) : type("Animal") {
    std::cout << "Void constructor for " << this->type << std::endl;
}

Animal::Animal(const Animal& src) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal::~Animal() {
	std::cout << "Deconstructing animal class" << std::endl;
}

void	Animal::makeSound() const {
	std::cout << "Animal class sound called" << std::endl;
}

std::string	Animal::getType() const {
	return (this->type);
}
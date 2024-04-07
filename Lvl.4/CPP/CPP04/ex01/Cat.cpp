/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:28:29 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 18:25:02 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

Cat::Cat() : Animal("Cat") {
	std::cout << "constructing " << this->type << std::endl;
	this->brain = new Brain();
}

Cat::~Cat() {
	delete this->brain;
	std::cout << "Deconstructing " << this->type << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Meow Meow" << std::endl;
}
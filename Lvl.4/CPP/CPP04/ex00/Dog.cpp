/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:41:30 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 17:25:47 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

Dog::Dog() : Animal("Dog") {
	std::cout << "Constructing " << this->type << std::endl;
}

Dog::~Dog() {
	std::cout << "Deconstructing " << this->type << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Woof Woof" << std::endl;
}
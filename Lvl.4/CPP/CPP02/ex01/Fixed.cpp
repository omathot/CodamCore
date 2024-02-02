/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 17:40:52 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/01/01 20:17:02 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator = (const Fixed &copy)
{
	std::cout << "copy assignment operator called" << std::endl;
	if (this != &copy)  // Check for self-assignment
        this->value = copy.value;  // Copy the value
    return (*this);  // Return the current object
}

Fixed::~Fixed()
{
	std::cout << "Deconstructor called" << std::endl;
}
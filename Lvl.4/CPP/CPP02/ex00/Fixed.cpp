/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 17:40:52 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/01/01 19:31:47 by oscarmathot      ###   ########.fr       */
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
        this->value = copy.getRawBits();  // Copy the value
    return (*this);  // Return the current object
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits called" << std::endl;
	this->value = raw;
}

// ~Fixed()
// {
// 	std::cout << "Deconstructor called" << std::endl;
// }
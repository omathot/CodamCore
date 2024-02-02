/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 17:28:47 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/01/01 23:31:34 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>

class	Fixed
{
private:
	int	value;
	static const int bits = 8;

public:
	Fixed() : value(0) {std::cout << "default constructor called" << std::endl;}
	Fixed(const int n) : value(n) {std::cout << "int constructor called" << std::endl;}
	Fixed(const float n) : value(n) {std::cout << "float constructor called" << std::endl;}
	Fixed(const Fixed &copy);
	Fixed &operator = (const Fixed &copy);
	~Fixed();

	float	toFloat(void) const;
	int		toInt(void) const;
};

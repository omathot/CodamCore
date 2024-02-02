/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 17:28:47 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/01/01 19:31:47 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class	Fixed
{
private:
	int	value;
	static const int bits = 8;

public:
	Fixed() : value(0){std::cout << "default constructor called" << std::endl;}
	Fixed(const Fixed &copy);
	Fixed &operator = (const Fixed &copy);
	~Fixed() {
		std::cout << "deconstructor" << std::endl;}
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};
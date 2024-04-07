/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:33:31 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 17:30:35 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <stdio.h>
# include <iostream>

class Animal {

private:
	/* data */

protected:
	std::string	type;

public:
	Animal(void);
	Animal(std::string name);
	Animal( const Animal& src );
	virtual ~Animal();

	std::string		getType() const;
	virtual void	makeSound() const;

};




#endif
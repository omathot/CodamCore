/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:33:31 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 19:25:14 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <stdio.h>
# include <iostream>

class AAnimal {

private:
	/* data */

protected:
	std::string	type;

public:
	AAnimal(void);
	AAnimal(std::string name);
	AAnimal( const AAnimal& src );
	virtual ~AAnimal();

	std::string		getType() const;
	virtual void	makeSound() const = 0;

};




#endif
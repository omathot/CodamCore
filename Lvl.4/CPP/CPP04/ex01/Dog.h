/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:28:58 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 18:33:26 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.h"
# include "Brain.h"

class Dog : public Animal
{
private:
	Brain	*brain;
public:
	Dog();
	~Dog();
	Dog(const Dog &src);
	Dog& operator=(const Dog& src);
	
	void	makeSound() const;

};

#endif
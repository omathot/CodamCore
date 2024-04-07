/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:36:22 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 18:02:34 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define  CAT_H

# include "Animal.h"
# include "Brain.h"

class Cat : public Animal
{
private:
	Brain	*brain;
public:
	Cat();
	~Cat();
	void	makeSound() const;
};

#endif
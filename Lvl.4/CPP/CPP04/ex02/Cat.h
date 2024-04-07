/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:36:22 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 19:26:12 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define  CAT_H

# include "AAnimal.h"
# include "Brain.h"

class Cat : public AAnimal
{
private:
	Brain	*brain;
public:
	Cat();
	~Cat();
	void	makeSound() const;
};

#endif
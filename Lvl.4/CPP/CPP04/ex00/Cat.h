/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:36:22 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 16:43:08 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define  CAT_H

# include "Animal.h"

class Cat : public Animal
{
private:
	/* data */
public:
	Cat();
	~Cat();
	void	makeSound() const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 17:16:06 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 17:17:04 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_H
# define WRONG_CAT_H

# include "WrongAnimal.h"

class WrongCat : public WrongAnimal
{
private:
	/* data */
public:
	WrongCat(/* args */);
	~WrongCat();

	void	makeSound() const;
};

#endif
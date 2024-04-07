/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 20:35:18 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/07 15:08:23 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.h"
# include "AMateria.h"

class Character : public ICharacter {

private:
	std::string	_name;
	AMateria	*_inventory[4];
	AMateria	*_listDiscarded[49];

public:
	Character(const std::string &name);
	Character(const Character &src);
	~Character();
	Character&	operator=(const Character &src);

	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	void	outputDiscardList();

};

#endif
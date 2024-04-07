/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 17:43:07 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 18:38:55 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain {

private:
	std::string	ideas[100];

public:
	Brain(const Brain &src);
	Brain(void);
	~Brain();
	Brain& operator=(const Brain &src);
};

#endif
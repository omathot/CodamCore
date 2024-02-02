/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 15:28:13 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/01/01 16:56:01 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <map>

class	Harl
{
private:

	enum	Level
	{
		DEBUG,
		INFO,
		WARNING,
		ERROR,
		UNKNOWN
	};
	
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	Level	getLevel(const std::string level);
	typedef	void	(Harl::*HarlFunction)(void);

public :
	void	complain(std::string level);
};
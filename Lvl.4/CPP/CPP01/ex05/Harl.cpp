/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 15:30:09 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/01/01 15:59:00 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::map < std::string, HarlFunction > functions;
	functions["DEBUG"] = &Harl::debug;
	functions["INFO"] = &Harl::info;
	functions["WARNING"] = &Harl::warning;
	functions["ERROR"] = &Harl::error;

	HarlFunction function = functions[level];
	if (function)
		(this->*function)();
	else
		std::cerr << "Invalid level : " << level << std::endl;
}

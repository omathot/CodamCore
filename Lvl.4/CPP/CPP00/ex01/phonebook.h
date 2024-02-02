/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 12:22:32 by oscarmathot       #+#    #+#             */
/*   Updated: 2023/12/25 15:22:41 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <sstream>

class	Contact
{
	public :
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_nber;
	std::string	worst_nightmare;
} ;

class	Phonebook
{
	public :
	const int	max_contacts;
	Contact		contacts[8];
	int			num_contacts;
	int 		w_pos;

	Phonebook() : num_contacts(0), w_pos(0) , max_contacts (8) {} // Constructor to initialize num_contacts to 0.
} ;

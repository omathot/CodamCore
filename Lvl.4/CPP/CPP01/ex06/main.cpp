/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:01:13 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/01/01 16:55:49 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.h"

int	main(int argc, char **argv)
{
	Harl	harl;
	
	if (argc != 2)
		std::cerr << "Invalid input" << std::endl;
	harl.complain(argv[1]);
	return (0);
}

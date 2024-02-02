/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 00:11:56 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/01/01 00:21:42 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*pointer;
	std::string	ref;
	
	pointer = &str;
	ref = str;
	std::cout << "Literal str address :" << &str << std::endl;
	std::cout << "Pointer :" << pointer << std::endl;
	std::cout << "Reference :" << &ref << std::endl;
	std::cout << "Content of string :" << str << std::endl;
	std::cout << "Value pointed to by pointer :" << *pointer << std::endl;
	std::cout << "Value pointed to by reference :" << ref << std::endl;
	return (0);
}

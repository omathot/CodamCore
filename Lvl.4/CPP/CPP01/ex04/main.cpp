/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:06:43 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/01/01 15:26:53 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

bool	check_file(std::string filename)
{
	std::ifstream	file(filename);
	
	return (file.good());
}

void	replace(char **argv)
{
	std::string			filename = argv[1];
	std::string			s1 = argv[2];
	std::string			s2 = argv[3];
	std::ifstream 		inFile(filename);
	std::stringstream	buffer;
	int					startPos;
	
	//read
	buffer << inFile.rdbuf();
	std::string	content = buffer.str();
	inFile.close();
	
	std::string	newContent;
	startPos = 0;
	while ((startPos = content.find(s1, startPos)) != std::string::npos)
	{
        newContent += content.substr(0, startPos) + s2;
        content = content.substr(startPos + s1.length());
        startPos = 0; // Reset startPos for the new content
    }
	newContent += content;
	std::ofstream outFile(filename + ".replace");
	if (outFile.is_open())
	{
		outFile << newContent;
		outFile.close();
	}
	else
		std::cerr << "Unable to open file to write" << std::endl;
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc != 4)
		return (std::cerr << "Invalid input" << std::endl, 1);
	if (check_file(argv[1]) == false)
		return (std::cerr << "Invalid file" << std::endl, 1);
	replace(argv);
}

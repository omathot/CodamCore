/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 17:30:22 by oscarmathot       #+#    #+#             */
/*   Updated: 2023/12/25 15:22:40 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./phonebook.h"

void	clear_buff(void);
void	ui_command(std::string *prompt, std::string *str);
void	ui_command(std::string *str);
void	ui_command(std::string *prompt, std::string *str, bool error);

std::string	format(const std::string& str)
{
    if (str.length() > 9)
        return str.substr(0, 9) + ".";
    return (str);
}

void	output_book(Phonebook *book)
{
    for (int i = 0; i < book->num_contacts; ++i)
	{
        std::cout << std::right << std::setw(10) << i
                  << " | " << std::setw(10) << format(book->contacts[i].first_name)
                  << " | " << std::setw(10) << format(book->contacts[i].last_name)
                  << " | " << std::setw(10) << format(book->contacts[i].nickname)
                  << std::endl;
    }
}

void	ui_command(std::string *prompt, std::string *str, bool error)
{
	while (true)
	{

        std::cout << *prompt;
        std::getline(std::cin, *str);
        if (str->empty() && error)
            std::cout << "Error: cannot capture empty string. Please try again." << std::endl;
		else if (str->empty())
			continue ;
		else
            break;
    }
}

void	ui_command(std::string *prompt, std::string *str)
{
    ui_command(prompt, str, false);
}
void	ui_command(std::string *str)
{
	std::string	empty;

	empty = "";
	ui_command(&empty, str);
}



void	initialize_contact(Phonebook *book)
{
	std::string	fn_prompt;
	std::string	ln_prompt;
	std::string nn_prompt;
	std::string	phone_prompt;
	std::string	nightmare_prompt;

	fn_prompt = "Enter first name: ";
	ln_prompt = "Enter last name: ";
	nn_prompt = "Enter Nickname: ";
	nightmare_prompt = "Enter worst nightmare: ";
	phone_prompt = "Enter phone number: ";
	ui_command(&fn_prompt, &book->contacts[book->w_pos].first_name);
    ui_command(&ln_prompt, &book->contacts[book->w_pos].last_name);
    ui_command(&nn_prompt, &book->contacts[book->w_pos].nickname);
    ui_command(&phone_prompt, &book->contacts[book->w_pos].phone_nber);
    ui_command(&nightmare_prompt, &book->contacts[book->w_pos].worst_nightmare);

    // std::cout << "Enter first name: ";
    // ui_command(&book->contacts[book->w_pos].first_name);
    // std::cout << "Enter last name: ";
    // ui_command(&book->contacts[book->w_pos].last_name);
    // std::cout << "Enter Nickname: ";
    // ui_command(&book->contacts[book->w_pos].nickname);
    // std::cout << "Enter phone number: ";
    // ui_command(&book->contacts[book->w_pos].phone_nber);
    // std::cout << "Enter worst nightmare: ";
    // ui_command(&book->contacts[book->w_pos].worst_nightmare);
	if (book->num_contacts < book->max_contacts)
    	book->num_contacts++;
	book->w_pos++;
}

void	select_contact(Phonebook *book)
{
	int	i;
	std::string	str_i;

    while (true)
	{
        std::cout << "Input index to view more > ";
		ui_command(&str_i);
		const char * c = str_i.c_str();
		i = std::atoi(c);
        if (std::cin.fail() || i < 0 || i >= book->num_contacts)
			std::cout << "Index out of range. Please try again." << std::endl;
		else
            break;
    }
	std::cout << std::right << std::setw(10) << i
			<< " | " << std::setw(10) << format(book->contacts[i].first_name)
			<< " | " << std::setw(10) << format(book->contacts[i].last_name)
			<< " | " << std::setw(10) << format(book->contacts[i].nickname)
			<< " | " << std::setw(10) << format(book->contacts[i].phone_nber)
			<< " | " << std::setw(10) << format(book->contacts[i].worst_nightmare)
			<< std::endl;
}

int	main(int argc, char **argv)
{
	std::string	string;
	Phonebook	book;
	int			i;
	int			add_counter;

	i = 1;
	add_counter = 0;
	if (argc != 1)
		return (std::cout << "[ERROR: ARGUMENTS]. Usage: Launch program first; then give commands." << std::endl, 1);
	std::cout << "Usage: ADD, SEARCH, EXIT" << std::endl;
	std::string	prompt;
	prompt = "Phonebook >";
	while (1)
	{
		ui_command(&prompt, &string, false);
		if (string.empty())
			continue ;
		if (string == "ADD" || string == "add")
		{
			if (add_counter < book.max_contacts)
			{
				initialize_contact(&book);
				add_counter++;
			}
			else
			{
				book.w_pos = (book.w_pos) % book.max_contacts;
				initialize_contact(&book);
			}
		}
		else if (string == "SEARCH" || string == "search")
		{
			output_book(&book);
			select_contact(&book);
		}
		else if (string == "EXIT" || string == "exit")
			return (std::cout << "exit" << std::endl, 0);
		else
			std::cout << "Invalid input, discarded" << std::endl;
		clear_buff();
	}
	return (0);
}

void	clear_buff(void)
{
	std::string	temp;

	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

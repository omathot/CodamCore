/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:32:31 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/06 19:27:05 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.h"
#include "Cat.h"
#include "Dog.h"
#include "WrongCat.h"

int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	delete j;//should not create a leak
	delete i;


	std::cout << std::endl << "-----COPY DOG-----" << std::endl;
    Dog basic;
    Dog tmp = basic;

	std::cout << std::endl << "-----STARTING LOOP-----" << std::endl << std::endl;
	const AAnimal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
    for (int i = 0; i < 4; i++) {
        delete animals[i];
    }

	return (0);
}

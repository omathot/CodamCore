/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 19:31:23 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/04/07 17:15:40 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.h"
#include "Ice.h"
#include "Cure.h"
#include "Character.h"

int main()
{
	IMateriaSource* src = new MateriaSource();
	std::cout << "-----LEARNING MATERIAS-----" << std::endl << std::endl;
	src->learnMateria(new Ice());	//0
	src->learnMateria(new Cure());	//1
	src->learnMateria(new Ice());	//2
	src->learnMateria(new Cure());	//3
	src->learnMateria(new Ice());	//should not be added to inventory (full !)
	std::cout << "----------MATERIASOURCE INVENTORY----------" << std::endl;
	src->outputInventory();

	std::cout << std::endl << "----------CHARACTER CREATION----------" << std::endl << std::endl;
	ICharacter* me = new Character("me");
	AMateria* tmp;

	std::cout << std::endl << "----------CREATE & EQUIP MATERIAS----------" << std::endl << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp); //0
	tmp = src->createMateria("cure");
	me->equip(tmp); //1
	tmp = src->createMateria("ice");
	me->equip(tmp); //2
	tmp = src->createMateria("cure");
	me->equip(tmp); //3  discardList[0] takes cure here somehow
	tmp = src->createMateria("ice");
	me->equip(tmp); //should not be added to inventory (full !)
	
	std::cout << std::endl << "----------CHARACTER INVENTORY----------" << std::endl << std::endl;
	me->outputInventory();
	std::cout << "--------------------------------" << std::endl;

	std::cout << std::endl << "----------USE MATERIAS----------" << std::endl << std::endl;
	ICharacter* bob = new Character("bob");
	std::cout << "test " << bob->getName() << " test" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	
	std::cout << std::endl << "---------- DISCARDLIST----------" << std::endl << std::endl;
	me->outputDiscardList();
	std::cout << "--------------------------------" << std::endl;

	std::cout << std::endl << "----------UNEQUIP MATERIAS----------" << std::endl << std::endl;
	me->unequip(2);
	me->unequip(3);

	std::cout << std::endl << "----------DISCARDLIST----------" << std::endl << std::endl;
	me->outputDiscardList();
	std::cout << "--------------------------------" << std::endl;
	
	std::cout << std::endl << "----------WRONG USAGE PROTECTED----------" << std::endl << std::endl;
	AMateria *test = NULL; // empty Materia
	me->use(2, *bob);
	me->unequip(3);
	me->equip(test);
	src->learnMateria(test);

	std::cout << std::endl << "----------CHARACTER INVENTORY----------" << std::endl << std::endl;
	me->outputInventory();
	std::cout << "--------------------------------" << std::endl;

	std::cout << std::endl << "----------DELETES----------" << std::endl << std::endl;
	delete bob;
	delete me;
	delete src;

	return (0);
}
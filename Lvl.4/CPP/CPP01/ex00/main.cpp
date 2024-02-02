/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 20:20:46 by oscarmathot       #+#    #+#             */
/*   Updated: 2023/12/29 20:30:56 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.h"

int	main()
{
	Zombie	*heapZombie;

	heapZombie = NULL;
	heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    delete (heapZombie); // Important to delete to avoid memory leak
	heapZombie = NULL;
    randomChump("StackZombie");
    return (0);
}

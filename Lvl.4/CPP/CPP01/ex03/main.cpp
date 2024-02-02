/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 12:11:39 by oscarmathot       #+#    #+#             */
/*   Updated: 2024/01/01 14:04:40 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.h"
#include "./HumanA.h"
#include "./HumanB.h"

/*
- - - Using a Pointer to Weapon - - -

Optional Association: Use a pointer when a Weapon is optional for a Human.
For example, if some instances of Human might not have a Weapon at all,
a pointer is suitable because it can be set to nullptr to indicate the absence of a Weapon.

Dynamic Association: If the Weapon associated with a Human can change or be assigned at
runtime (after the Human object has been constructed), a pointer is appropriate.
It allows you to easily change the associated Weapon or assign it later.

Polymorphism: If Weapon is a base class and you are dealing with polymorphic behavior
where a Human might have different types of weapons (like Sword, Gun, etc., that are derived from Weapon),
pointers are typically used to take advantage of dynamic binding.

- - - Using a Reference to Weapon - - -

Mandatory Association: Use a reference when a Weapon is mandatory for a Human.
If every Human object must be associated with a Weapon and this association does not
change over the lifetime of the Human object, a reference is suitable. It ensures
that there is always a valid Weapon associated with the Human.

Safety and Simplification: References are generally safer and easier to use compared to pointers
because they cannot be nullptr and do not have to be dereferenced (->) to access the members
of the referenced object. This reduces the risk of null pointer dereferencing bugs.

Lifetime Management: If the Weapon is guaranteed to exist as long as the Human
object exists (i.e., the Weapon's lifetime encompasses the Human's lifetime), a reference is a
good choice. This scenario assumes that the Weapon is either part of the same object or
managed by another mechanism that ensures its validity.

Conclusion
- Use a pointer when the association is optional, dynamic, or involves polymorphism.
- Use a reference when the association is mandatory, static (doesn't change over time),
and when safety and simplification are priorities.
*/
int main()
{
	{
		Weapon  club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon  club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return (0);
}

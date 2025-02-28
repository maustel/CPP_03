/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:52:42 by maustel           #+#    #+#             */
/*   Updated: 2025/02/26 14:52:42 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

/*
Derived class ScavTrap inherits all attributes from base class ClapTrap
except:
    its constructors and its destructor
    its assignment operator members (operator=)
    its friends
    its private members
But constructors and destructor will be automativally called by derived class constructors and destructor
If I want another behaviour in an inherited function, i can just declare the
function again in my derived class with the same name, implementing another behaviour (like attack)

*/
int main ()
{
	// ClapTrap Clap(std::string ("Clap"));
	// ScavTrap Scav(std::string ("Scav"));
	FragTrap Frag(std::string ("Frag"));

	// Clap.attack("Sparrow");
	// Scav.attack("Finch");
	Frag.attack("Robin");
	Frag.beRepaired(10);
	Frag.takeDamage(20);
	Frag.highFivesGuys();

	return (0);
}

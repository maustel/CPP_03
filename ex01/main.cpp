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

/*
parent = base class
child = derived class
Derived class ScavTrap inherits all attributes from base class ClapTrap
except:
    its constructors and its destructor
    its assignment operator members (operator=)
    its friends
    its private members
But constructors and destructor will be automativally called by derived class constructors and destructor
If I want another behaviour in an inherited function, i can just declare the
function again in my derived class with the same name, implementing another behaviour (like attack)
The base class manages shared state that the derived class relies on
This state must be properly initialized before the derived class can modify it
It must be destructed after the derived class has been destructed
*/
int main ()
{
	ClapTrap Clap(std::string ("Amsel"));
	std::cout << std::endl;

	ClapTrap ClapCpy(Clap);
	std::cout << std::endl;

	ScavTrap Scav(std::string ("Specht"));
	Scav.attack("Eagle");
	std::cout << std::endl;

	ScavTrap ScavCpy(Scav);	//copies Specht
	std::cout << std::endl;

	ScavCpy.beRepaired(10);
	ScavCpy.takeDamage(33);
	ScavCpy.attack("Meise");
	std::cout << std::endl;

	Scav.guardGate();
	std::cout << std::endl;

	return (0);
}

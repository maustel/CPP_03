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

int main ()
{
	ClapTrap Trap(std::string ("Amsel"));
	Trap.attack("Meise");
	Trap.takeDamage(11);
	Trap.takeDamage(11);
	Trap.beRepaired(9);
	Trap.attack("Meise");
	Trap.takeDamage(11);
	Trap.attack("Meise");
	Trap.attack("Meise");
	Trap.attack("Meise");
	Trap.takeDamage(11);
	Trap.attack("Meise");
	Trap.attack("Meise");
	Trap.attack("Meise");
	Trap.beRepaired(10);
	Trap.attack("Meise");
	Trap.attack("Meise");
	Trap.attack("Meise");

	Trap.beRepaired(1);


	return (0);
}

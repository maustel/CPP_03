/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 10:05:55 by maustel           #+#    #+#             */
/*   Updated: 2025/02/27 10:05:55 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
Default Constructor of base class is called automatically if not specified
*/
ScavTrap::ScavTrap()
{
	std::cout << "Scavtrap Default Constructor called." << std::endl;
}

/*
Here its specified to not call base class default constructor but constructor
that takes name
*/
ScavTrap::ScavTrap(const std::string& name): ClapTrap(name)
{
	this->_name = name;
	this->_health = 100;
	this->_energy_pts = 50;
	this->_attack_dmg = 20;
	std::cout << "Scavtrap " << name << " created."<< std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap " << this->_name << " destructed!" << std::endl;
}

/*
In this copy constructor, it will be called ClapTrap copy constructor, so
derived class ScavTrap doesnt have to copy anything, since its done in base class
*/
ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other)
{
	std::cout << other._name << " is copied in ScavTrap copy constructor." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap Copy assignment operator called. Getting values from " << other._name << std::endl;
	this->_name = other._name;
	this->_health = other._health;
	this->_energy_pts = other._energy_pts;
	this->_attack_dmg = other._attack_dmg;

	return (*this);
}

//---------------------------- [MEMBER FUNCTIONS] --------------------

void ScavTrap::attack(const std::string &target)
{
	if (this->_health < 1)
		std::cout << "Scavtrap " << this->_name << " is dead. Can't attack!" << std::endl;
	else if (this->_energy_pts < 1)
		std::cout << "Scavtrap " << this->_name << " has no energy points left. Can't attack!" << std::endl;
	else
	{
		this->_energy_pts--;
		std::cout << "Scavtrap " << this->_name << " attacks " << target << " causing " << this->_attack_dmg << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}

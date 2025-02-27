/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:52:40 by maustel           #+#    #+#             */
/*   Updated: 2025/02/26 14:52:40 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Claptrap Default Constructor called." << std::endl;
}

ClapTrap::ClapTrap(const std::string& name): _name(name), _health(10), _energy_pts(10), _attack_dmg(0)
{
	std::cout << "Claptrap " << name << " created."<< std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap " << this->_name << " destructed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << other._name << " is copied in Claptrap copy constructor." << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Claptrap Copy assignment operator called. Getting values from " << other._name << std::endl;
	this->_name = other._name;
	this->_health = other._health;
	this->_energy_pts = other._energy_pts;
	this->_attack_dmg = other._attack_dmg;
	return (*this);
}

//---------------------------- [MEMBER FUNCTIONS] --------------------

void ClapTrap::attack(const std::string &target)
{
	if (this->_health < 1)
		std::cout << "Claptrap " << this->_name << " is dead. Can't attack!" << std::endl;
	else if (this->_energy_pts < 1)
		std::cout << "Claptrap " << this->_name << " has no energy points left. Can't attack!" << std::endl;
	else
	{
		this->_energy_pts--;
		std::cout << "Claptrap " << this->_name << " attacks " << target << " causing " << this->_attack_dmg << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_attack_dmg += amount;
	std::cout << "Claptrap " << this->_name << " is taking " << amount << " of attack damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_health < 1)
		std::cout << "Claptrap " << this->_name << " is dead. Can't be repaired!" << std::endl;
	else if (this->_energy_pts < 1)
		std::cout << "Claptrap " << this->_name << " has no energy points left. Can't be repaired!" << std::endl;
	else
	{
		this->_energy_pts--;
		this->_health += amount;
		std::cout << "Claptrap " << this->_name << " is taking " << amount << " of health points!" << std::endl;
	}
}


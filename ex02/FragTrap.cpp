/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:30:50 by maustel           #+#    #+#             */
/*   Updated: 2025/02/27 11:30:50 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Fragtrap Default Constructor called." << std::endl;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name)
{
	this->_name = name;
	this->_health = 100;
	this->_energy_pts = 100;
	this->_attack_dmg = 30;
	std::cout << "Fragtrap " << name << " created."<< std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Fragtrap " << this->_name << " destructed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other)
{
	std::cout << other._name << " is copied in FragTrap copy constructor." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap Copy assignment operator called. Getting values from " << other._name << std::endl;
	this->_name = other._name;
	this->_health = other._health;
	this->_energy_pts = other._energy_pts;
	this->_attack_dmg = other._attack_dmg;

	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << this->_name << ": High five!" << std::endl;
}

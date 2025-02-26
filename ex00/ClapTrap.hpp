/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:52:35 by maustel           #+#    #+#             */
/*   Updated: 2025/02/26 14:52:35 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

#include <iostream>
#include <string>

class ClapTrap {
	private:
	std::string		_name;
	unsigned int	_health;
	unsigned int	_energy_pts;
	unsigned int	_attack_dmg;

	public:
	ClapTrap( void );
	~ClapTrap( void );
	ClapTrap(const ClapTrap& other);	//copy constructor
	ClapTrap& operator=(const ClapTrap& other);	//copy assignment operator
	ClapTrap(const std::string& name);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif

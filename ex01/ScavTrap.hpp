/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:51:14 by maustel           #+#    #+#             */
/*   Updated: 2025/02/26 16:51:14 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	private:

	public:
	ScavTrap(void);	//inherits constructors and destructor from ClapTrap, but prints its own messages
	~ScavTrap(void);
	ScavTrap(const ScavTrap& other);
	ScavTrap& operator=(const ScavTrap& other);
	ScavTrap(const std::string& name);

	void attack(const std::string& target);
	void guardGate();
};

#endif

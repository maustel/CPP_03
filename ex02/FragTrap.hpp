/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:30:55 by maustel           #+#    #+#             */
/*   Updated: 2025/02/27 11:30:55 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FAGTRAP_HPP__
# define __FAGTRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
	public:
	FragTrap();
	~FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const FragTrap& other);
	FragTrap& operator=(const FragTrap& other);
};

#endif


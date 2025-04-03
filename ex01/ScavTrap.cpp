/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:47:09 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/03 17:05:45 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) 
{
	health = 100;
	energy = 50;
	damage = 20;
	std::cout << "ScavTrap " << name << " constructed" << std::endl;

}

ScavTrap::~ScavTrap()
{
}


void ScavTrap::guardGate()
{
	
}
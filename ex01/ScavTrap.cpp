/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:47:09 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/04 15:12:20 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << " ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
	: ClapTrap(name) 
{
	health = 100;
	energy = 50;
	damage = 20;
	std::cout << "ScavTrap " << name << " constructed" << std::endl;

}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap  deconstructed called" << std::endl;
}


void ScavTrap::guardGate()
{ 
	std::cout << "ScavTrap " << name << "is now in Gate keeper mode." << std::endl;
}

ScavTrap&  ScavTrap::operator=(ScavTrap const &copy)
{
	std::cout << "Assignment operator for ScavTrap called" << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}
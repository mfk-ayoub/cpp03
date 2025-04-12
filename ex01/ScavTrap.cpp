/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:47:09 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/04 18:36:59 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << " ScavTrap Default constructor called" << std::endl;
	health = 100;
	energy = 50;
	damage = 20;
}

ScavTrap::ScavTrap(const std::string& name)
	: ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " constructed" << std::endl;
	health = 100;
	energy = 50;
	damage = 20;

}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap  Destructor called" << std::endl;
}


void ScavTrap::guardGate()
{ 
	if (health < 1)
	{
		std::cout <<  "ScavTrap "  << name << " cannot guard the gate. He is dead." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	*this = copy;
}

void ScavTrap::attack(const std::string& target)
{	
    if (health == 0)
    {
        std::cout << "ScavTrap " << name << " cannot attack! No hit points left!" << std::endl;
        return ;
    }
    else if (energy == 0)
    {
        std::cout << "ScavTrap " << name << " has no energy to attack!" << std::endl;
        return ;
    }
    else
    {
        std::cout << "ScavTrap " << target <<  " attacks "  << name 
                  << ", causing " << damage << " points of damage!" << std::endl;
        energy--; 
    }
}

ScavTrap&  ScavTrap::operator=(ScavTrap const &other)
{
	std::cout << "Assignment operator for ScavTrap called" << std::endl;
	if (this != &other)
	{
		name = other.name;
		health = other.health;
		energy = other.energy;
		damage = other.damage;
	}
	return (*this);
}
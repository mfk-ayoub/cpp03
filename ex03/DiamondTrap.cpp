/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:31:54 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/17 16:58:03 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap  default Constructor called" << std::endl;
	this->name = "default";
	this->health = FragTrap::health;
	this->energy = ScavTrap::energy;
	this->damage = FragTrap::damage;
}

DiamondTrap::DiamondTrap(const std::string& name)
	: ClapTrap(name + "_clap_name") 
{
    std::cout << "DiamondTrap Constructor called" << std::endl;
    this->name = name;
 	this->health = FragTrap::health;
	this->energy = ScavTrap::energy;
	this->damage = FragTrap::damage;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

DiamondTrap&  DiamondTrap::operator=(DiamondTrap const &other)
{
	std::cout << "Assignment operator for DiamondTrap called" << std::endl;
	if (this != &other)
	{
		name = other.name;
		health = other.health;
		energy = other.energy;
		damage = other.damage;
	}
	return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
	:ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
	name = copy.name;
    health = copy.health;
    energy = copy.energy;
    damage = copy.damage;
}

void DiamondTrap::whoAmI() const
{
		std::cout << "\tDiamondTrap name: " << name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}


DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap  " << name  << " Destructor called " <<  std::endl;

}
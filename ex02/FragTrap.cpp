/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:53:16 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/04 16:14:00 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	health = 100;
	energy = 30;
	damage = 30;
}


FragTrap::~FragTrap()
{
	std::cout << " FragTrap  " << name <<  " Destructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name)
	: ClapTrap(name)
{
	std::cout << "FragTrap " << name << " constructed" << std::endl;
	health = 100;
	energy = 30;
	damage = 30;
}

void FragTrap::highFivesGuys(void)
{
	if (health <  1)
	{
		std::cout << "Cannot high five because: FragTrap " << name << " is dead." << std::endl;
		return ;
	}
	std::cout << "FragTrap "  << name << " says: Give me a high five!"  << std::endl;	
}


FragTrap&  FragTrap::operator=(FragTrap const &other)
{
	std::cout << "Assignment operator for FragTrap called" << std::endl;
	if (this != &other)
	{
		name = other.name;
		health = other.health;
		energy = other.energy;
		damage = other.damage;
	}
	return (*this);
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	*this = copy;
}

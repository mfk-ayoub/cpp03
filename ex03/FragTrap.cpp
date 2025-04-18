/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:53:16 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/18 11:10:15 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	_name = "default FragTrap name";
	health = 100;
	energy = 30;
	damage = 30;
}


FragTrap::~FragTrap()
{
	std::cout << " FragTrap  " << _name <<  " Destructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name)
	: ClapTrap(name)
{
	std::cout << "FragTrap " << _name << " constructed" << std::endl;
	health = 100;
	energy = 30;
	damage = 30;
}

void FragTrap::highFivesGuys(void)
{
	if (health <  1)
	{
		std::cout << "Cannot high five because: FragTrap " << _name << " is dead." << std::endl;
		return ;
	}
	std::cout << "FragTrap "  << _name << " says: Give me a high five!"  << std::endl;	
}


FragTrap&  FragTrap::operator=(FragTrap const &other)
{
	std::cout << "Assignment operator for FragTrap called" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		health = other.health;
		energy = other.energy;
		damage = other.damage;
	}
	return (*this);
}

FragTrap::FragTrap(const FragTrap &copy)
	:ClapTrap(copy)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	_name = copy._name;
	health = copy.health;
	energy = copy.energy;
	damage = copy.damage ;
}

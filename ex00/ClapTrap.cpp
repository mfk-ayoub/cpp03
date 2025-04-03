/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 10:30:24 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/03 14:10:00 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

void ClapTrap::attack(const std::string& target)
{
    if (health == 0)
    {
        std::cout << "ClapTrap " << name << " cannot attack! No hit points left!" << std::endl;
        return ;
    }
    else if (energy == 0)
    {
        std::cout << "ClapTrap " << name << " has no energy to attack!" << std::endl;
        return ;
    }
    else
    {
        std::cout << "ClapTrap " << target << RED  <<  " attacks " <<  RESET << name 
                  << ", causing " << damage << " points of damage!" << std::endl;
        energy--; 
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (health == 0)
    {
        std::cout << "ClapTrap " << name << " cannot take dammage no hit points left!" << std::endl;
        return ;
    }
	damage = amount;
    std::cout << "ClapTrap " << name << YELLOW  << " takes " << RESET << amount << " damage!" << std::endl;
    if (amount >= health)
        health = 0;
    else
        health -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy == 0)
    {
        std::cout << "ClapTrap " << name << " has no energy to repair itself!" << std::endl;
        return;
    }

    std::cout << "ClapTrap " << name << BLUE << " repairs " << RESET << " itself, restoring " << amount << " hit points!" << std::endl;
    
    if (health + amount > 10)
        health = 10;
    else
        health += amount;
    energy--;
}


ClapTrap::ClapTrap(const std::string& name)
    : name(name), health(10), energy(10), damage(0)
{
    std::cout  << GREEN << "Constructor called" << RESET <<std::endl;
	std::cout << "health points " << health << " energy points "  << energy << " damage " << damage << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << RED << "Destructor called " << RESET <<  std::endl;
}
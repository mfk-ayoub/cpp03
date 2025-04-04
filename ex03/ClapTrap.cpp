/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 10:30:24 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/04 16:06:12 by ayel-mou         ###   ########.fr       */
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
        std::cout << "ClapTrap " << target <<  " attacks "  << name 
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
    std::cout << "ClapTrap " << name << " takes " << amount << " damage!" << std::endl;
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

    std::cout << "ClapTrap " << name << " repairs "  << " itself, restoring " << amount << " hit points!" << std::endl;
    
    if (health + amount > 10)
        health = 10;
    else
        health += amount;
    energy--;
}


ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = copy;
}


ClapTrap::ClapTrap() 
    : name("defaut name"),health(10), energy(10), damage(0)
{
    std::cout << "ClapTrap  Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
    : name(name), health(10), energy(10), damage(0)
{
    std::cout   << "ClapTrap " <<  name << " Constructor called" <<std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap  " << name  << " Destructor called " <<  std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy Assignment Operator called" << std::endl;
    
    if (this != &other)
    {
        name = other.name;
        health = other.health;
        energy = other.energy;
        damage = other.damage;
    } 
    return (*this);
}
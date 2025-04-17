/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 16:51:42 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/17 16:50:59 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DIOMONDTRAP_HPP_
#define _DIOMONDTRAP_HPP_

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap :  public ScavTrap , public FragTrap
{
	private:
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap(const std::string& name); 
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap&  operator=(DiamondTrap const &other);
		void attack(const std::string& target);
		void whoAmI() const;
		~DiamondTrap();
};




#endif

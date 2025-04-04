/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 16:51:42 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/04 16:59:29 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DIOMONDTRAP_HPP_
#define _DIOMONDTRAP_HPP_

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
	private:
		std::string name;
	public:
		DiamondTrap();
		~DiamondTrap();
		void whoAmI();
};

DiamondTrap::DiamondTrap()
{
}

DiamondTrap::~DiamondTrap()
{
}


#endif

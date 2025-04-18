/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:17:22 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/18 09:44:42 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _SCAVTRAP_HPP_
#define _SCAVTRAP_HPP_

#include "ClapTrap.hpp"

class ScavTrap  : public ClapTrap 
{
	public:
		ScavTrap();
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap &copy);
		ScavTrap	&operator=(ScavTrap const &other);
		void attack(const std::string& target);
		~ScavTrap();
		void guardGate();
};





#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:17:22 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/03 18:54:49 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _SCAVTRAP_HPP_
#define _SCAVTRAP_HPP_

#include "ClapTrap.hpp"

class ScavTrap  : public ClapTrap 
{
	private:
	public:
		ScavTrap();
		ScavTrap(const std::string& name);
		ScavTrap	&operator=(ScavTrap const &copy);
		~ScavTrap();
		void guardGate();
};





#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:17:22 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/03 17:05:27 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _SCAVTRAP_HPP_
#define _SCAVTRAP_HPP_

#include "ClapTrap.hpp"

class ScavTrap  : public ClapTrap 
{
	private:
		
	public:
		ScavTrap(const std::string& name);
		~ScavTrap();
		void guardGate();
};





#endif
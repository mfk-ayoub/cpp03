/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 20:33:46 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/03 14:02:02 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap A("Tralalero Tralala");
	
	A.attack("Bombardiro Crocodilo");
	A.takeDamage(4);
	A.beRepaired(4);
	A.takeDamage(4);
	A.takeDamage(2);
	A.attack("Bombardiro Crocodilo");
	A.takeDamage(4);
	A.takeDamage(2);
	A.takeDamage(4);	
}
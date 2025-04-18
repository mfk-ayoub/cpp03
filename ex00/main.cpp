/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 20:33:46 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/04 18:40:03 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap B;
	ClapTrap D;
	ClapTrap A("Tralalero Tralala");
	ClapTrap C(B);
	
	
	A.attack("Bombardiro Crocodilo");
	A.takeDamage(4);
	A.beRepaired(4);
	A.takeDamage(4);
	A.takeDamage(2);
	A.attack("Lirili larila");
	A.takeDamage(4);
	A.takeDamage(2);
	A.takeDamage(4);	

	C.attack("trulimero trulicina");
	C.takeDamage(10);
	C.takeDamage(10);
	
	D = A;
	D.attack("Bombombini Gusini");
	D.beRepaired(10);
	D.takeDamage(5);
	
	return (0);
}
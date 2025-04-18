/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 20:33:46 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/18 11:22:02 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


int main(void)
{
    DiamondTrap A("vaca saturno saturnita");
    DiamondTrap B("Balerinna Cappucinna");
    DiamondTrap C(B);  
    DiamondTrap D;      
    DiamondTrap E("TCrocodildo Penissini");       

    A.attack("Bombardiro Crocodilo");
    A.takeDamage(20);
    A.beRepaired(15);
    A.takeDamage(30);
    A.attack("Lirili larila");
    A.highFivesGuys(); 
    A.takeDamage(50);
    A.takeDamage(20);
    A.whoAmI();

    C.attack("trulimero trulicina");
    C.highFivesGuys();
    C.takeDamage(40);
    C.beRepaired(20);
    C.whoAmI();

    D = E;                     
    D.attack("Bombombini Gusini");
    D.takeDamage(60);
    D.beRepaired(30);
    D.highFivesGuys();
    D.whoAmI();

    
    return (0);
}


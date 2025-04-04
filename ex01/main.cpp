/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 20:33:46 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/04 16:49:05 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main()
{
    
    ScavTrap A("Tralalero Tralala"); 
    ScavTrap B("Balerinna Cappucinna");
    ScavTrap C(B);  
    ScavTrap D;      
    ScavTrap E("TCrocodildo Penissini");       

    A.attack("Bombardiro Crocodilo");
    A.takeDamage(20);
    A.beRepaired(15);
    A.takeDamage(30);
    A.attack("Lirili larila");
    A.guardGate(); 
    A.takeDamage(50);
    A.takeDamage(20);


    C.attack("trulimero trulicina");
    C.guardGate();
    C.takeDamage(40);
    C.beRepaired(20);

    D = E;                     
    D.attack("Bombombini Gusini");
    D.takeDamage(60);
    D.beRepaired(30);
    D.guardGate();
    
    return (0);
}


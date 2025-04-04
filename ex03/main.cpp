/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 20:33:46 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/04 16:45:47 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main(void)
{
    FragTrap A("Tralalero Tralala"); 
    FragTrap B("Balerinna Cappucinna");
    FragTrap C(B);  
    FragTrap D;      
    FragTrap E("TCrocodildo Penissini");       

    A.attack("Bombardiro Crocodilo");
    A.takeDamage(20);
    A.beRepaired(15);
    A.takeDamage(30);
    A.attack("Lirili larila");
    A.highFivesGuys(); 
    A.takeDamage(50);
    A.takeDamage(20);


    C.attack("trulimero trulicina");
    C.highFivesGuys();
    C.takeDamage(40);
    C.beRepaired(20);

    D = E;                     
    D.attack("Bombombini Gusini");
    D.takeDamage(60);
    D.beRepaired(30);
    D.highFivesGuys();
    
    return (0);
}


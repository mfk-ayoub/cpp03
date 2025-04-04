/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 20:33:46 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/04 15:23:18 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main()
{
    ClapTrap clap("tung tung sahur");
    ScavTrap scav("shimpanzini bananinni");
    clap.attack("trulimero trulicina");
    scav.attack("Cappuccino assasino");
    scav.guardGate();
    scav.takeDamage(30);
    scav.beRepaired(20);

    return (0);
}


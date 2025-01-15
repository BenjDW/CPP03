/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 10:29:52 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/14 21:43:48 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

// int main() 
// {
//     ScavTrap scav("AnsarTek");
//     scav.guardGate();

//     return 0;
// }

// int main() {
//     std::cout << "----- Creating ClapTrap -----" << std::endl;
//     ClapTrap clap("Clappy");
//     clap.attack("a target dummy");
//     clap.takeDamage(5);
//     clap.beRepaired(10);

//     std::cout << "\n----- Creating ScavTrap -----" << std::endl;
//     ScavTrap scav("Scavy");
//     scav.attack("a raider");
//     scav.takeDamage(20);
//     scav.beRepaired(15);
//     scav.guardGate();

//     std::cout << "\n----- Creating FragTrap -----" << std::endl;
//     FragTrap frag("Fraggy");
//     frag.attack("a bandit");
//     frag.takeDamage(30);
//     frag.beRepaired(25);
//     frag.highFivesGuys();

//     std::cout << "\n----- Testing Polymorphism -----" << std::endl;
//     ClapTrap *ptr = &scav;
//     ptr->attack("a polymorphic target");
//     ptr = &frag;
//     ptr->attack("another polymorphic target");

//     std::cout << "\n----- End of Testing -----" << std::endl;
//     return 0;
// }
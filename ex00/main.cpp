/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 10:29:52 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/14 06:04:45 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    // Création d'un ClapTrap
    ClapTrap clap("Ansartek");

    // Test 1 : Attaquer une cible
    std::cout << "\n--- Attack Tests ---\n";
    clap.attack("Target1");
    clap.attack("Target2");

    // Test 2 : Réduire les points de vie (simuler des dégâts reçus)
    std::cout << "\n--- Taking Damage ---\n";
    clap.takeDamage(5); // Subit 5 points de dégâts

    // Test 3 : Réparer
    std::cout << "\n--- Repair Tests ---\n";
    clap.beRepaired(3); // Restaure 3 points de vie

    // Test 4 : Épuisement de l'énergie
    std::cout << "\n--- Energy Depletion ---\n";
    for (int i = 0; i < 10; i++)
    {
        clap.attack("DummyTarget");
    }
    clap.attack("TargetAfterDepletion"); // Devrait afficher un message d'énergie insuffisante

    // Test 5 : Attaque avec 0 HP
    std::cout << "\n--- Attack with 0 HP ---\n";
    clap.takeDamage(10); // Subit des dégâts jusqu'à atteindre 0 HP
    clap.attack("LastTarget"); // Devrait afficher un message de ClapTrap "mort"

    return 0;
}

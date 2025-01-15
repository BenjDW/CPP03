/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:59:16 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/14 10:12:36 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap(std::string nam) : ClapTrap(nam)
{
	std::cout << "constructor of ScavTrap is called" << std::endl;
	this->Hit_point = 100;
	this->Energy_point = 50;
	this->Attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "destructor of Scavtrap is called" << std::endl;
}
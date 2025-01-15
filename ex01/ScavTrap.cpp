/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:59:16 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/14 22:11:26 by bde-wits         ###   ########.fr       */
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

ScavTrap&	ScavTrap::operator=(const ScavTrap cpy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->name = cpy.name;
	this->Hit_point = cpy.Hit_point;
	this->Attack_damage = cpy.Attack_damage;
	this->Energy_point = cpy.Energy_point;
	return (*this);
}

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor called" << std::endl;
	this->name = "Ansar_Tek";
	this->Energy_point = 10;
	this->Hit_point = 10;
	this->Attack_damage = 0;
}

ScavTrap::ScavTrap(const ClapTrap &cpy)
{
	std::cout << "copy constructor called" << std::endl;
	*this = cpy;
}
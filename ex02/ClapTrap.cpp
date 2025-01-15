/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 01:09:11 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/14 10:11:38 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::attack(const std::string& target)
{
	if (this->Energy_point == 0)
	{
		std::cout << "ZZZzzzzZZZzzzzZZZZzzzz Claptrap" << this->name << "need more energy to do anything, where is the loading battery" << std::endl;
		return ;
	}
	if (this->Hit_point == 0)
	{
		std::cout << "Claptrap " << this->name << " is already dead , u can do nothing in this state" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
	this->Energy_point -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Hit_point == 0)
	{
		std::cout << "Claptrap" << this->name << "is already dead , his can't feel anything" << std::endl;
		return ;
	}
	std::cout << "ouch Claptrap "<< this->name << " take " << amount << " damage , is hurts a lot , are you crazy ?" << std::endl;
	Hit_point -= amount;
	if (Hit_point < 0)
		Hit_point = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Energy_point == 0)
	{
		std::cout << "ZZZzzzzZZZzzzzZZZZzzzz Claptrap" << this->name << "need more energy to do anything, where is the loading battery" << std::endl;
		return ;
	}
	if (this->Hit_point == 0)
	{
		std::cout << "Claptrap" << this->name << "is already dead , u can do nothing in this state" << std::endl;
		return ;
	}
	std::cout << "Claptrap " << this->name << " repaired himself with scraps metals by " << amount << " point" << std::endl;
	if (this->Hit_point < 10)
		this->Hit_point += amount;
	if (Hit_point > 10)
		Hit_point = 10;
	Energy_point--;
}

ClapTrap::ClapTrap(std::string namae)
{
	std::cout << "constructor of ClapTrap is called" << std::endl;
	this->name = namae;
	this->Energy_point = 10;
	this->Hit_point = 10;
	this->Attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor of ClapTrap is called" << std::endl;
}
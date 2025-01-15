/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 21:28:57 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/14 23:14:13 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High five! Up top! Don't leave me hanging, bro!" << std::endl;
}

FragTrap::FragTrap(std::string nam) : ClapTrap(nam)
{
	std::cout << "FragTrap constructor is called" << std::endl;
	this->Hit_point = 100;
	this->Energy_point = 100;
	this->Attack_damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap le Destructor is called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap cpy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->name = cpy.name;
	this->Hit_point = cpy.Hit_point;
	this->Attack_damage = cpy.Attack_damage;
	this->Energy_point = cpy.Energy_point;
	return (*this);
}



FragTrap::FragTrap()
{
	std::cout << "Default constructor called" << std::endl;
	this->name = "Ansar_Tek";
	this->Energy_point = 10;
	this->Hit_point = 10;
	this->Attack_damage = 0;
}



FragTrap::FragTrap(const ClapTrap &cpy)
{
	std::cout << "copy constructor called" << std::endl;
	*this = cpy;
}
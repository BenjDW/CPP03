/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 21:28:57 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/14 22:11:44 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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



FragTrap::FragTrap(const FragTrap &cpy)
{
	std::cout << "copy constructor called" << std::endl;
	*this = cpy;
}
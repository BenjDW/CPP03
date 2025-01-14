/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 01:09:30 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/14 06:06:46 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <ostream>
#include <iomanip>
#include <string>

// It will be called ClapTrap and will have the following private attributes initialized
// to the values specified in brackets:
// • Name, which is passed as parameter to a constructor
// • Hit points (10), represent the health of the ClapTrap
// • Energy points (10)
// • Attack damage (0)

// Add the following public member functions so the ClapTrap looks more realistic:
// • void attack(const std::string& target);
// • void takeDamage(unsigned int amount);
// • void beRepaired(unsigned int amount);


class ClapTrap
{
	public:
		ClapTrap(std::string nam);
		~ClapTrap();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		// std::string		get_name();
		// int		get_hp();
		// int		get_nrj();
		// int		get_damage();
		// int		set_hp();
		// int		set_nrj();
		// int		set_damage();
	private:
		std::string	name;
		int	Hit_point;
		int	Energy_point;
		int	Attack_damage;
};

// void	ClapTrap::attack(const std::string& target)
// {
// 	if (this->Energy_point == 0)
// 	{
// 		std::cout << "ZZZzzzzZZZzzzzZZZZzzzz Claptrap need more energy to do anything, where is the loading battery" << std::endl;
// 		return ;
// 	}
// 	if (this->Hit_point == 0)
// 	{
// 		std::cout << "Claptrap is already dead , u can do nothing in this state" << std::endl;
// 		return ;
// 	}
// 	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << "points of damage!" << std::endl;
// 	this->Energy_point -= 1;
// }

// void	ClapTrap::takeDamage(unsigned int amount)
// {
// 	if (this->Hit_point == 0)
// 	{
// 		std::cout << "Claptrap is already dead , his can't feel anything" << std::endl;
// 		return ;
// 	}
// 	std::cout << "ouch Claptrap take " << amount << " damage , is hurts a lot , are you crazy ?" << std::endl;
// 	Hit_point -= amount;
// 	if (Hit_point < 0)
// 		Hit_point = 0;
// }

// void	ClapTrap::beRepaired(unsigned int amount)
// {
// 	if (this->Energy_point == 0)
// 	{
// 		std::cout << "ZZZzzzzZZZzzzzZZZZzzzz Claptrap need more energy to do anything, where is the loading battery" << std::endl;
// 		return ;
// 	}
// 	if (this->Hit_point == 0)
// 	{
// 		std::cout << "Claptrap is already dead , u can do nothing in this state" << std::endl;
// 		return ;
// 	}
// 	std::cout << "Claptrap repaired himself with scraps metals by " << amount << " point" << std::endl;
// 	if (this->Hit_point < 10)
// 		this->Hit_point += amount;
// 	if (Hit_point > 10)
// 		Hit_point = 10;
// 	Energy_point--;
// }

// ClapTrap::ClapTrap(std::string namae)
// {
// 	std::cout << "constructor is called" << std::endl;
// 	this->name = namae;
// 	this->Energy_point = 10;
// 	this->Hit_point = 10;
// 	this->Attack_damage = 0;
// }

// ClapTrap::~ClapTrap()
// {
// 	std::cout << "destructor is called" << std::endl;
// }

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 21:29:03 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/14 21:42:20 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
	public:
		FragTrap(std::string nam);
		~FragTrap();
		void	highFivesGuys(void);
	private:
};

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

#endif
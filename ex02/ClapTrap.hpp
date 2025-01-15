/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 01:09:30 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/14 22:11:41 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <ostream>
#include <iomanip>
#include <string>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string nam);
		ClapTrap(const ClapTrap &cpy);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap cpy);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	protected:
		std::string	name;
		int	Hit_point;
		int	Energy_point;
		int	Attack_damage;
};

#endif
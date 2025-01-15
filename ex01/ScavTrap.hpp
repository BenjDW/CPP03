/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:59:19 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/14 22:11:31 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
	public:
		ScavTrap();
		ScavTrap(std::string nam);
		ScavTrap(const ClapTrap &cpy);
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap cpy);
		void	guardGate();
	private:
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 21:29:03 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/14 22:18:00 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
	public:
		FragTrap();
		FragTrap(std::string nam);
		FragTrap(const FragTrap &cpy);
		~FragTrap();
		FragTrap &operator=(const FragTrap cpy);
		void	highFivesGuys(void);
	private:
};

#endif
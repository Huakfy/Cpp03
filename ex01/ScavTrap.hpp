/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:32:11 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/06 17:36:30 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private:
		bool	_GateKeeping;
	public:
		//v Forme canonique v
		ScavTrap();
		ScavTrap(const ScavTrap &src);
		ScavTrap	&operator=(const ScavTrap &src);
		~ScavTrap();

		ScavTrap(std::string name);
		void	attack(const std::string& target);
		void	guardGate();
};

#endif

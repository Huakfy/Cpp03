/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:56:06 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/06 19:29:52 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		//v Forme canonique v
		FragTrap();
		FragTrap(const FragTrap &src);
		FragTrap	&operator=(const FragTrap &src);
		~FragTrap();

		FragTrap(std::string name);
		void highFivesGuys(void);
};

#endif

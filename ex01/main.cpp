/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:52:04 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/06 17:47:06 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main() {
	ScavTrap	tic("Tic");
	ScavTrap	tic2("Truc");

	tic2 = tic;
	ScavTrap	tic3(tic);

	std::cout << "\nTic playing\n";
	tic.attack("Tac");
	tic.takeDamage(7);
	tic.beRepaired(2);
	tic.takeDamage(5);
	tic.attack("Toc");
	tic.attack("Tuc");
	tic.takeDamage(33);
	tic.attack("Tac");
	tic.beRepaired(42);


	std::cout << "\nTic2 playing\n";
	tic2.attack("Tic");
	tic2.attack("Tac");
	tic2.attack("Toc");
	tic2.attack("Tic");
	tic2.attack("Tac");
	tic2.attack("Toc");
	tic2.attack("Tic");
	tic2.attack("Tac");
	tic2.attack("Toc");
	tic2.attack("Tic");

	tic2.attack("Tac");
	tic2.attack("Toc");
	tic2.attack("Tic");
	tic2.attack("Tac");

	tic2.guardGate();
	tic2.takeDamage(99);
	tic2.beRepaired(66);
	tic2.takeDamage(99);
	tic2.attack("Tic");

	std::cout << "\nTic3 playing\n";
	tic3.takeDamage(90);
	tic3.beRepaired(90);
	tic3.takeDamage(42);
	tic3.beRepaired(42);
	std::cout << std::endl;
	return (0);
}

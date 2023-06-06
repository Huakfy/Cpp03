/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:52:04 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/06 18:16:26 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main() {
	FragTrap	tic("Tic");
	FragTrap	tic2("Truc");

	tic2 = tic;
	FragTrap	tic3(tic);

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

	tic2.takeDamage(42);
	tic2.highFivesGuys();

	tic2.attack("Tac");
	tic2.takeDamage(42);
	tic2.attack("Toc");
	tic2.attack("Tic");
	tic2.takeDamage(42);
	tic2.attack("Tac");


	std::cout << "\nTic3 playing\n";
	tic3.takeDamage(90);
	tic3.beRepaired(90);
	tic3.takeDamage(42);
	tic3.beRepaired(42);
	std::cout << std::endl;
	return (0);
}

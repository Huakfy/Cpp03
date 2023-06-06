/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:32:07 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/06 18:14:17 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//v Forme canonique v
ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_Name = "Unnamed";
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	this->_GateKeeping = false;
	return;
}
ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap() {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
	return;
}
ScavTrap	&ScavTrap::operator=(const ScavTrap &src) {
	std::cout << "ScavTrap assignment operator overload called" << std::endl;
	this->_Name = src._Name;
	this->_HitPoints = src._HitPoints;
	this->_EnergyPoints = src._EnergyPoints;
	this->_AttackDamage = src._AttackDamage;
	this->_GateKeeping = src._GateKeeping;
	return *this;
}
ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called for " << this->_Name << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap() {
	std::cout << "ScavTrap constructor called for " << name << std::endl;
	this->_Name = name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	this->_GateKeeping = false;
	return;
}

void	ScavTrap::attack(const std::string& target) {
	if (!this->_EnergyPoints)
		std::cout << "ScavTrap " << this->_Name << " doesn't have any Energy Points to attack " << target << std::endl;
	else if (!this->_HitPoints)
		std::cout << "ScavTrap " << this->_Name << " doesn't have any Hit Points" << std::endl;
	else {
		std::cout << "ScavTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
		this->_EnergyPoints--;
	}
	return;
}

void	ScavTrap::guardGate() {
	if (this->_GateKeeping)
		std::cout << "ScavTrap " << this->_Name << " is already in Gate Keeper mode" << std::endl;
	else
		std::cout << "ScavTrap " << this->_Name << " entered Gate Keeper mode" << std::endl;
	return;
}

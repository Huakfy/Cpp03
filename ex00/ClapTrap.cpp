/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:52:37 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/06 16:14:06 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//v Forme canonique v
ClapTrap::ClapTrap() : _Name("Unnnamed"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0){
	std::cout << "Default constructor called" << std::endl;
	return;
}
ClapTrap::ClapTrap(const ClapTrap &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}
ClapTrap	&ClapTrap::operator=(const ClapTrap &src) {
	std::cout << "Assignment operator overload called" << std::endl;
	this->_Name = src._Name;
	this->_HitPoints = src._HitPoints;
	this->_EnergyPoints = src._EnergyPoints;
	this->_AttackDamage = src._AttackDamage;
	return *this;
}
ClapTrap::~ClapTrap() {
	std::cout << "Destructor called for " << this->_Name << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : _Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) {
	std::cout << "Constructor called for " << name << std::endl;
	return;
}

void	ClapTrap::attack(const std::string& target) {
	if (!this->_EnergyPoints)
		std::cout << "ClapTrap " << this->_Name << " doesn't have any Energy Points to attack " << target << std::endl;
	else if (!this->_HitPoints)
		std::cout << "ClapTrap " << this->_Name << " doesn't have any Hit Points" << std::endl;
	else {
		std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
		this->_EnergyPoints--;
	}
	return;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (!this->_HitPoints)
		std::cout << "ClapTrap " << this->_Name << " doesn't have any Hit Points already" << std::endl;
	else if (amount > INT_MAX)
		std::cout << "Value: " << amount << " bigger than int" << std::endl;
	else if ((int)(this->_HitPoints - amount) < 0 || (int)(this->_HitPoints - amount) > this->_HitPoints) {
		std::cout << "ClapTrap " << this->_Name << " takes " << this->_HitPoints << "HP of damage, now at: 0HP" << std::endl;
		this->_HitPoints = 0;
	}
	else {
		this->_HitPoints -= amount;
		std::cout << "ClapTrap " << this->_Name << " takes " << amount << "HP of damage, now at: " << this->_HitPoints << "HP" << std::endl;
	}
	return;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (!this->_EnergyPoints)
		std::cout << "ClapTrap " << this->_Name << " doesn't have any Energy Points to be repaired" << std::endl;
	else if (!this->_HitPoints)
		std::cout << "ClapTrap " << this->_Name << " doesn't have any Hit Points" << std::endl;
	else if (amount > INT_MAX)
		std::cout << "Value: " << amount << " bigger than int" << std::endl;
	else {
		this->_HitPoints += amount;
		std::cout << "ClapTrap " << this->_Name << " repairs " << amount << "HP of damage, now at: " << this->_HitPoints << "HP" << std::endl;
		this->_EnergyPoints--;
	}
	return;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:34:29 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/06 19:50:01 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//v Forme canonique v
DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap() {
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_Name = "Unnamed";
	ClapTrap::_Name = this->_Name;
	ClapTrap::_Name += "_clap_name";
	this->_HitPoints = FragTrap::_HitPoints;
	this->_EnergyPoints = ScavTrap::_EnergyPoints;
	this->_AttackDamage = FragTrap::_AttackDamage;
	return;
}
DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(), FragTrap(), ScavTrap() {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
	return;
}
DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &src) {
	std::cout << "DiamondTrap assignment operator overload called" << std::endl;
	this->_Name = src._Name;
	ClapTrap::_Name = this->_Name;
	ClapTrap::_Name += "_clap_name";
	this->_HitPoints = FragTrap::_HitPoints;
	this->_EnergyPoints = ScavTrap::_EnergyPoints;
	this->_AttackDamage = FragTrap::_AttackDamage;
	return *this;
}
DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called for " << this->_Name << std::endl;
	return;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(), FragTrap(), ScavTrap() {
	std::cout << "DiamondTrap constructor called for " << name << std::endl;
	this->_Name = name;
	ClapTrap::_Name = this->_Name;
	ClapTrap::_Name += "_clap_name";
	this->_HitPoints = FragTrap::_HitPoints;
	this->_EnergyPoints = ScavTrap::_EnergyPoints;
	this->_AttackDamage = FragTrap::_AttackDamage;
	return;
}

void DiamondTrap::whoAmI() {
	std::cout << "Name: " << this->_Name << " | ClapTrap Name: " << ClapTrap::_Name << std::endl;
	return;
}

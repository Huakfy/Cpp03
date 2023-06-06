/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:56:09 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/06 18:14:23 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_Name = "Unnamed";
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	return;
}
FragTrap::FragTrap(const FragTrap &src) : ClapTrap() {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
	return;
}
FragTrap	&FragTrap::operator=(const FragTrap &src) {
	std::cout << "FragTrap assignment operator overload called" << std::endl;
	this->_Name = src._Name;
	this->_HitPoints = src._HitPoints;
	this->_EnergyPoints = src._EnergyPoints;
	this->_AttackDamage = src._AttackDamage;
	return *this;
}
FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called for " << this->_Name << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap() {
	std::cout << "FragTrap constructor called for " << name << std::endl;
	this->_Name = name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	return;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->_Name << " asked for a high five" << std::endl;
	return;
}

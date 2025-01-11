/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsinagl <vsinagl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:18:44 by vsinagl           #+#    #+#             */
/*   Updated: 2024/12/10 19:21:52 by vsinagl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hp = 10;
	this->energy = 10;
	this->att_damage = 0;
	std::cout << "Clap Trap " << this->name << " is created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destroying ClapTrap " << this->name  << std::endl;
}

/*
you can pass integers to output streams baby :), no conversion needed
*/
void	ClapTrap::attack(const std::string &target)
{
	if (target.empty())
		return ;
	if (this->hp <= 0)
	{
		return ;
	}
	if (this->energy - 1 < 0)
	{
		std::cout << "Clap Trap " << this->name << " is out of energy!" << std::endl;
		return ;
	}
	this->energy = this->energy - 1;
	std::cout << "Clap Trap " << this->name << " attacks: " << target << ", causing "
		<< this->att_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp <= 0)
	{
		return ;
	}
	std::cout << "Clap Trap " << this->name << " gets " << amount << " demage" << std::endl;
	this->hp = this->hp - amount;
	if (this->hp <= 0)
	{
		if (this->hp < 0)
			this->hp = 0;
		std::cout << "Trap " << this->name << " died!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp <= 0)
		return ;
	if ((this->hp) >= 10)
	{
		std::cout << "Trap is fully healed!" << std::endl;
	}
	else
	{
		if (this->energy - 1 < 0)
		{
			std::cout << "Clap Trap " << this->name << " is out of energy!" << std::endl;
			return ;
		}
		this->energy = this->energy - 1;


		std::cout << "ClapTrap " << this->name << " is healed for " << amount << " points!" << std::endl;
		if (this->hp + amount >= 10)
		{
			this->hp = 10;
			std::cout << "Trap is fully healed!" << std::endl;
		}
		else
			this->hp = this->hp + amount;
	}
}

std::string	ClapTrap::getName()
{
	return (this->name);
}

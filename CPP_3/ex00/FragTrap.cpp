/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 02:58:48 by youlee            #+#    #+#             */
/*   Updated: 2021/02/12 02:58:49 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void		FragTrap::rangedAttack(std::string const& target)
{
	std::cout << "FR4G-TP "<<
		this->name<<" attacks "<<
		target<<" at range, causing "<<
		this->Ranged_attack_damage<<" points of damage!" << std::endl;

}
void		FragTrap::meleeAttack(std::string const& target)
{
	std::cout << "FR4G-TP " <<
		this->name << " attacks " <<
		target << " at range, causing " <<
		this->Melee_attack_damage << " points of damage!" << std::endl;
}
bool		FragTrap::takeDamage(unsigned int amount)
{
	int damage = amount - this->Armor_damage_reduction;
	this->Hit_points -= damage;
	if (this->Hit_points < 0)
	{
		damage += this->Hit_points;
		this->Hit_points = 0;
	}
	std::cout << "Take Damage! " << amount << "The remaining points " <<
		this->Hit_points << std::endl;
	return (this->Hit_points == 0);
}
void		FragTrap::beRepaired(unsigned int amount)
{
	std::cout<<"beRepaired! "<<amount<< "The remaining points " <<
		this->Energy_points << std::endl;
}
FragTrap::FragTrap(void)
{
	std::cout << "Default Constructor called\n";
	this->Hit_points = 100;
	this->Max_energy_potins = 100;
	this->Max_Hit_points = 100;
	this->Energy_points = 100;
	this->Level = 1;
	this->name = "Default";
	this->Melee_attack_damage = 30;
	this->Ranged_attack_damage = 20;
	this->Armor_damage_reduction = 5;
}
FragTrap::FragTrap(std::string name)
{
	std::cout << "String Constructor called\n";
	this->Hit_points = 100;
	this->Max_energy_potins = 100;
	this->Max_Hit_points = 100;
	this->Energy_points = 100;
	this->Level = 1;
	this->name = name;
	this->Melee_attack_damage = 30;
	this->Ranged_attack_damage = 20;
	this->Armor_damage_reduction = 5;
}
FragTrap::~FragTrap(void)
{
	std::cout << "Default Destructor called\n";
}
void		FragTrap::vaulthunter_dot_exe(std::string const& target)
{
	srand(time(0));

}
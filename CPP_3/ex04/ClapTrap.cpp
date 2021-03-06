/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 00:00:04 by youlee            #+#    #+#             */
/*   Updated: 2021/02/14 00:00:10 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void		ClapTrap::rangedAttack(std::string const& target)
{
	std::cout << "FR4G-TP "<<
	this->name<<" attacks "<<
	target<<" at range, causing "<<
	this->Ranged_attack_damage<<" points of damage!" << std::endl;

}
void		ClapTrap::meleeAttack(std::string const& target)
{
	std::cout << "FR4G-TP " <<
	this->name << " attacks " <<
	target << " at melee, causing " <<
	this->Melee_attack_damage << " points of damage!" << std::endl;
}
bool		ClapTrap::takeDamage(unsigned int amount)
{
	int damage = amount - this->Armor_damage_reduction;
	this->Hit_points -= damage;
	if (this->Hit_points < 0)
	{
		damage += this->Hit_points;
		this->Hit_points = 0;
	}
	std::cout << "Take Damage! " << amount << " The remaining points " <<
		this->Hit_points << std::endl;
	return (this->Hit_points == 0);
}
void		ClapTrap::beRepaired(unsigned int amount)
{
	int rep;

	if ((int)(this->Hit_points + amount) < this->Max_Hit_points)
	{	
		this->Hit_points += amount;
		rep = amount;
	}
	else
	{
		rep = this->Hit_points + amount - this->Max_Hit_points;
		rep = amount - rep;
		this->Hit_points = this->Max_Hit_points;
	}
	std::cout<<"beRepaired! "<< rep << " The remaining points " <<
		this->Hit_points << std::endl;
}
ClapTrap::ClapTrap(void)
{
	std::cout << "Default ClapTrap Constructor called\n";
	this->Hit_points = 100;
	this->Max_energy_potins = 100;
	this->Max_Hit_points = 50;
	this->Energy_points = 50;
	this->Level = 1;
	this->name = "Default ClapTrap";
	this->Melee_attack_damage = 20;
	this->Ranged_attack_damage = 15;
	this->Armor_damage_reduction = 3;
}
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "String ClapTrap Constructor called\n";
	this->Hit_points = 100;
	this->Max_energy_potins = 100;
	this->Max_Hit_points = 50;
	this->Energy_points = 50;
	this->Level = 1;
	this->name = name;
	this->Melee_attack_damage = 20;
	this->Ranged_attack_damage = 15;
	this->Armor_damage_reduction = 3;
}
ClapTrap::ClapTrap(ClapTrap const &f)
{
	std::cout << "ClapTrap Copy Constructor called\n";
	this->Hit_points = f.Hit_points;
	this->Max_energy_potins = f.Max_energy_potins;
	this->Max_Hit_points = f.Max_Hit_points;
	this->Energy_points = f.Energy_points;
	this->Level = f.Level;
	this->name = f.name;
	this->Melee_attack_damage = f.Melee_attack_damage;
	this->Ranged_attack_damage = f.Ranged_attack_damage;
	this->Armor_damage_reduction = f.Armor_damage_reduction;
}
ClapTrap::~ClapTrap(void)
{
    std::cout << "Default ClapTrap Destructor called\n";
}
std::string	ClapTrap::get_name(void)
{
	return (this->name);
}
ClapTrap &ClapTrap::operator=(ClapTrap const &f)
{
	this->Hit_points = f.Hit_points;
	this->Max_energy_potins = f.Max_energy_potins;
	this->Max_Hit_points = f.Max_Hit_points;
	this->Energy_points = f.Energy_points;
	this->Level = f.Level;
	this->name = f.name;
	this->Melee_attack_damage = f.Melee_attack_damage;
	this->Ranged_attack_damage = f.Ranged_attack_damage;
	this->Armor_damage_reduction = f.Armor_damage_reduction;
	return (*this);
}
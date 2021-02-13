/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 23:42:28 by youlee            #+#    #+#             */
/*   Updated: 2021/02/13 23:42:37 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void		ScavTrap::rangedAttack(std::string const& target)
{
	std::cout << "FR4G-TP "<<
	this->name<<" attacks "<<
	target<<" at range, causing "<<
	this->Ranged_attack_damage<<" points of damage!" << std::endl;

}
void		ScavTrap::meleeAttack(std::string const& target)
{
	std::cout << "FR4G-TP " <<
	this->name << " attacks " <<
	target << " at melee, causing " <<
	this->Melee_attack_damage << " points of damage!" << std::endl;
}

bool		ScavTrap::takeDamage(unsigned int amount)
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
void		ScavTrap::beRepaired(unsigned int amount)
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
		this->Hit_points = this->Max_Hit_points;
	}
	std::cout<<"beRepaired! "<< rep << "The remaining points " <<
		this->Hit_points << std::endl;
}
ScavTrap::ScavTrap(void)
{
	std::cout << "Default Constructor called\n";
	this->Hit_points = 100;
	this->Max_energy_potins = 100;
	this->Max_Hit_points = 50;
	this->Energy_points = 50;
	this->Level = 1;
	this->name = "Default ScavTrap";
	this->Melee_attack_damage = 20;
	this->Ranged_attack_damage = 15;
	this->Armor_damage_reduction = 3;
}
ScavTrap::ScavTrap(std::string name)
{
	std::cout << "String Constructor called\n";
	this->Hit_points = 100;
	this->Max_energy_potins = 100;
	this->Max_Hit_points = 100;
	this->Energy_points = 100;
	this->Level = 1;
	this->name = name;
	this->Melee_attack_damage = 20;
	this->Ranged_attack_damage = 15;
	this->Armor_damage_reduction = 3;
}
ScavTrap::ScavTrap(ScavTrap const &f)
{
	std::cout<<"Call Copy constructor!\n";
	this->Hit_points = f.Hit_points;
	this->Max_Hit_points = f.Max_Hit_points;
	this->Melee_attack_damage = f.Melee_attack_damage;
	this->Ranged_attack_damage = f.Ranged_attack_damage;
	this->name = f.name;
	this->Level = f.Level;
	this->Armor_damage_reduction = f.Armor_damage_reduction;
}
ScavTrap &ScavTrap::operator=(ScavTrap const &f)
{
	std::cout<<"Call Assign Operator!\n";
	this->Hit_points = f.Hit_points;
	this->Max_Hit_points = f.Max_Hit_points;
	this->Melee_attack_damage = f.Melee_attack_damage;
	this->Ranged_attack_damage = f.Ranged_attack_damage;
	this->name = f.name;
	this->Level = f.Level;
	this->Armor_damage_reduction = f.Armor_damage_reduction;
	return (*this);
}
ScavTrap::~ScavTrap(void)
{
	std::cout << "Default Destructor called\n";
}
void ScavTrap::challengeNewcomer(void)
{
    std::string challenge_pool[3] = {"Soba", "Ramen", "rice noodles"};
    std::cout<< this->name << " lunch menu is "<< challenge_pool[rand() % 3] << std::endl;
}
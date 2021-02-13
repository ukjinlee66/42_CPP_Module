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

ScavTrap::ScavTrap(void)
{
	std::cout << "Default ScavTrap Constructor called\n";
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
	std::cout << "String ScavTrap Constructor called\n";
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
	std::cout<<"Call ScavTrap Copy constructor!\n";
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
	std::cout << "Default ScavTrap Destructor called\n";
}
void ScavTrap::challengeNewcomer(void)
{
    std::string challenge_pool[3] = {"Soba", "Ramen", "rice noodles"};
    std::cout<< this->name << " lunch menu is "<< challenge_pool[rand() % 3] << std::endl;
}
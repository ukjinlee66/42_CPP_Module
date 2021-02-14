/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 17:34:29 by youlee            #+#    #+#             */
/*   Updated: 2021/02/14 17:34:35 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
    std::cout << "Default SuperTrap Constructor called\n";
	this->Hit_points = this->FragTrap::Hit_points;
	this->Max_energy_potins = this->NinjaTrap::Max_energy_potins;
	this->Max_Hit_points = this->FragTrap::Max_Hit_points;
	this->Energy_points = this->NinjaTrap::Energy_points;
	this->Level = 1;
	this->name = "Default SuperTrap name";
	this->Melee_attack_damage = this->NinjaTrap::Melee_attack_damage;
	this->Ranged_attack_damage = this->FragTrap::Ranged_attack_damage;
	this->Armor_damage_reduction = this->FragTrap::Armor_damage_reduction;

}
SuperTrap::SuperTrap(std::string name)
{
    std::cout << "String SuperTrap Constructor called\n";
	this->Hit_points = this->FragTrap::Hit_points;
	this->Max_energy_potins = this->NinjaTrap::Max_energy_potins;
	this->Max_Hit_points = this->FragTrap::Max_Hit_points;
	this->Energy_points = this->NinjaTrap::Energy_points;
	this->Level = 1;
	this->name = name;
	this->Melee_attack_damage = this->NinjaTrap::Melee_attack_damage;
	this->Ranged_attack_damage = this->FragTrap::Ranged_attack_damage;
	this->Armor_damage_reduction = this->FragTrap::Armor_damage_reduction;
}
SuperTrap::SuperTrap(SuperTrap const &f)
{
    std::cout << "SuperTrap Copy Constructor called\n";
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
SuperTrap::~SuperTrap(void)
{
    std::cout << "Default SuperTrap Destructor called\n";
}
void		SuperTrap::rangedAttack(std::string const& target)
{
    this->FragTrap::rangedAttack(target);
}
void		SuperTrap::meleeAttack(std::string const& target)
{
    this->NinjaTrap::meleeAttack(target);
}
SuperTrap &SuperTrap::operator=(SuperTrap const &f)
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 00:24:56 by youlee            #+#    #+#             */
/*   Updated: 2021/02/14 00:25:03 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	std::cout << "Default NinjaTrap Constructor called\n";
	this->Hit_points = 60;
	this->Max_energy_potins = 60;
	this->Max_Hit_points = 120;
	this->Energy_points = 120;
	this->Level = 1;
	this->name = "Default";
	this->Melee_attack_damage = 60;
	this->Ranged_attack_damage = 5;
	this->Armor_damage_reduction = 0;
}
NinjaTrap::NinjaTrap(std::string name)
{
	std::cout << "String NinjaTrap Constructor called\n";
	this->Hit_points = 60;
	this->Max_energy_potins = 60;
	this->Max_Hit_points = 120;
	this->Energy_points = 120;
	this->Level = 1;
	this->name = name;
	this->Melee_attack_damage = 60;
	this->Ranged_attack_damage = 5;
	this->Armor_damage_reduction = 0;
}
NinjaTrap::NinjaTrap(NinjaTrap const &f)
{
	std::cout<<"Call NinjaTrap Copy constructor!\n";
	this->Hit_points = f.Hit_points;
	this->Max_Hit_points = f.Max_Hit_points;
	this->Melee_attack_damage = f.Melee_attack_damage;
	this->Ranged_attack_damage = f.Ranged_attack_damage;
	this->name = f.name;
	this->Level = f.Level;
	this->Armor_damage_reduction = f.Armor_damage_reduction;
}
NinjaTrap &NinjaTrap::operator=(NinjaTrap const &f)
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
NinjaTrap::~NinjaTrap(void)
{
	std::cout << "Default NinjaTrap Destructor called\n";
}

void NinjaTrap::ninjaShoebox(FragTrap &tr)
{
    if (this->Energy_points < 15)
	{
		std::cout<<"There is not enough energy."<<std::endl;
		return ;
	}
	this->Energy_points -= 15;
    std::cout << "NinjaShoeBox! parameter FragTrap!" << std::endl;
    tr.vaulthunter_dot_exe("ShoeBox target!");
    std::cout << "Ninja Trap " << this->name << " The remaining energy is " << this->Energy_points << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &tr)
{
    if (this->Energy_points < 15)
	{
		std::cout<<"There is not enough energy."<<std::endl;
		return ;
	}
	this->Energy_points -= 15;
    std::cout << "NinjaShoeBox! parameter ClapTrap!" << tr.get_name() <<std::endl;
    std::cout << "There is no special function of ClapTrap!" << std::endl;
    std::cout << "Ninja Trap " << this->name << " The remaining energy is " << this->Energy_points << std::endl;
}
void NinjaTrap::ninjaShoebox(NinjaTrap &tr)
{
    if (this->Energy_points < 15)
	{
		std::cout<<"There is not enough energy."<<std::endl;
		return ;
	}
	this->Energy_points -= 15;
    std::cout << "NinjaShoeBox! parameter NinjaTrap!" << tr.getname() <<std::endl;
    std::cout << "ShoeBox is already running!" << std::endl;
    std::cout << "Ninja Trap " << this->name << " The remaining energy is " << this->Energy_points << std::endl;
}
void NinjaTrap::ninjaShoebox(ScavTrap &tr)
{
    if (this->Energy_points < 15)
	{
		std::cout<<"There is not enough energy."<<std::endl;
		return ;
	}
	this->Energy_points -= 15;
    std::cout << "NinjaShoeBox! parameter ScavTrap!" << std::endl;
    tr.challengeNewcomer();
    std::cout << "Ninja Trap " << this->name << " The remaining energy is " << this->Energy_points << std::endl;
}
std::string NinjaTrap::getname(void)
{
    return (this->name);
}
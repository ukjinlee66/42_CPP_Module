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

FragTrap::FragTrap(void)
{
	std::cout << "Default FragTrap Constructor called\n";
	this->Hit_points = 100;
	this->Max_energy_potins = 100;
	this->Max_Hit_points = 100;
	this->Energy_points = 100;
	this->Level = 1;
	this->name = "Default";
	this->Melee_attack_damage = 30;
	this->Ranged_attack_damage = 20;
	this->Long_distance_attack_damage = 10;
	this->Magic_attack = 35;
	this->Chemical_attack = 15;
	this->Armor_damage_reduction = 5;
}
FragTrap::FragTrap(std::string name)
{
	std::cout << "String FragTrap Constructor called\n";
	this->Hit_points = 100;
	this->Max_energy_potins = 100;
	this->Max_Hit_points = 100;
	this->Energy_points = 100;
	this->Level = 1;
	this->name = name;
	this->Melee_attack_damage = 30;
	this->Ranged_attack_damage = 20;
	this->Long_distance_attack_damage = 10;
	this->Magic_attack = 35;
	this->Chemical_attack = 15;
	this->Armor_damage_reduction = 5;
}
FragTrap::FragTrap(FragTrap const &f)
{
	std::cout<<"Call FragTrap Copy constructor!\n";
	this->Hit_points = f.Hit_points;
	this->Max_Hit_points = f.Max_Hit_points;
	this->Melee_attack_damage = f.Melee_attack_damage;
	this->Ranged_attack_damage = f.Ranged_attack_damage;
	this->Long_distance_attack_damage = f.Long_distance_attack_damage;
	this->Magic_attack = f.Magic_attack;
	this->Chemical_attack = f.Chemical_attack;
	this->name = f.name;
	this->Level = f.Level;
	this->Armor_damage_reduction = f.Armor_damage_reduction;
}
FragTrap &FragTrap::operator=(FragTrap const &f)
{
	std::cout<<"Call Assign Operator!\n";
	this->Hit_points = f.Hit_points;
	this->Max_Hit_points = f.Max_Hit_points;
	this->Melee_attack_damage = f.Melee_attack_damage;
	this->Ranged_attack_damage = f.Ranged_attack_damage;
	this->Long_distance_attack_damage = f.Long_distance_attack_damage;
	this->Magic_attack = f.Magic_attack;
	this->Chemical_attack = f.Chemical_attack;
	this->name = f.name;
	this->Level = f.Level;
	this->Armor_damage_reduction = f.Armor_damage_reduction;
	return (*this);
}
FragTrap::~FragTrap(void)
{
	std::cout << "Default FragTrap Destructor called\n";
}
void		FragTrap::vaulthunter_dot_exe(std::string const& target)
{
	int ch;
	int dam[5];

	//damage pool
	dam[0] = this->Melee_attack_damage;
	dam[1] = this->Ranged_attack_damage;
	dam[2] = this->Long_distance_attack_damage;
	dam[3] = this->Magic_attack;
	dam[4] = this->Chemical_attack;
	//name pool
	std::string attack_pool[5] = {"Melee", "Ranged", "Long", "Magic", "Chemical"};
	if (this->Energy_points < 25)
	{
		std::cout<<"There is not enough energy."<<std::endl;
		return ;
	}
	this->Energy_points -= 25;
	srand(time(0));
	ch = rand() % 5; // 0~4;
	std::cout<<this->name << " attacks " <<
		target << " at " << attack_pool[ch] << ", causing " <<
		dam[ch] << " points of damage!" << std::endl;
}
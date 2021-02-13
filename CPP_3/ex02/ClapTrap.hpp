/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 00:00:17 by youlee            #+#    #+#             */
/*   Updated: 2021/02/14 00:00:24 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <cstdlib>
#include <string>

class ClapTrap
{
protected:
	int			Hit_points;
	int			Max_Hit_points;
	int			Energy_points;
	int			Max_energy_potins;
	int			Level;
	std::string name;
	int			Melee_attack_damage;
	int			Ranged_attack_damage;
	int			Armor_damage_reduction;
public:
	void		rangedAttack(std::string const& target);
	void		meleeAttack(std::string const& target);
	bool		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &f);
	ClapTrap &operator=(ClapTrap const &f);
	~ClapTrap(void);
};










#endif
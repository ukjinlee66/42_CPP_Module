/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 23:42:43 by youlee            #+#    #+#             */
/*   Updated: 2021/02/13 23:42:56 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class ScavTrap
{
private:
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
	void		vaulthunter_dot_exe(std::string const& target);
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &f);
	ScavTrap &operator=(ScavTrap const &f);
	~ScavTrap(void);
    void challengeNewcomer(void);
};
#endif
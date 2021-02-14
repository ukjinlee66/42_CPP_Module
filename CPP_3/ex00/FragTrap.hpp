/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 02:58:57 by youlee            #+#    #+#             */
/*   Updated: 2021/02/12 02:58:58 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>

class FragTrap
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
	int			Long_distance_attack_damage;
	int			Magic_attack;
	int			Chemical_attack;
	int			Armor_damage_reduction;
public:
	void		rangedAttack(std::string const& target);
	void		meleeAttack(std::string const& target);
	void		LongAttack(std::string const& target);
	void		MagicAttack(std::string const& target);
	void		ChemicalAttack(std::string const& target);
	bool		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		vaulthunter_dot_exe(std::string const& target);
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const &f);
	FragTrap &operator=(FragTrap const &f);
	~FragTrap(void);
};
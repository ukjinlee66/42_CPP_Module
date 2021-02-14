/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 02:59:09 by youlee            #+#    #+#             */
/*   Updated: 2021/02/12 02:59:10 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	srand(time(0));

	std::cout<< " <<< FragTrap >>> \n\n";

	FragTrap f("first Frag");
	f.vaulthunter_dot_exe("random target");
	f.meleeAttack("target2");
	f.rangedAttack("target3");
	f.takeDamage(20);
	f.beRepaired(10);
	f.takeDamage(40);
	f.takeDamage(40);
	f.takeDamage(40);
	f.beRepaired(200);
	f.vaulthunter_dot_exe("ramdom target1");
	f.vaulthunter_dot_exe("ramdom target2");
	f.vaulthunter_dot_exe("ramdom target3");
	f.vaulthunter_dot_exe("ramdom target4");
	f.vaulthunter_dot_exe("ramdom target5");

	std::cout<< " <<< ScavTrap >>> \n\n";

	ScavTrap s("first Scav");
	s.challengeNewcomer();
	s.meleeAttack("tar1");
	s.rangedAttack("tar2");
	s.takeDamage(30);
	s.takeDamage(20);
	s.beRepaired(50);
	s.takeDamage(150);
	s.beRepaired(200);
	s.challengeNewcomer();
	s.challengeNewcomer();
	s.challengeNewcomer();
	return (0);
}
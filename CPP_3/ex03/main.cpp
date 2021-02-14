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
#include "NinjaTrap.hpp"

int main(void)
{
	srand(time(0));

	std::cout<< " <<< FragTrap >>> \n\n";

	FragTrap *f = new FragTrap("first Frag");
	f->vaulthunter_dot_exe("random target");
	f->meleeAttack("target2");
	f->rangedAttack("target3");
	f->takeDamage(20);
	f->beRepaired(10);
	f->takeDamage(40);
	f->takeDamage(40);
	f->takeDamage(40);
	f->beRepaired(200);
	f->vaulthunter_dot_exe("ramdom target1");
	f->vaulthunter_dot_exe("ramdom target2");
	f->vaulthunter_dot_exe("ramdom target3");
	f->vaulthunter_dot_exe("ramdom target4");
	f->vaulthunter_dot_exe("ramdom target5");

	std::cout<< " <<< ScavTrap >>> \n\n";

	ScavTrap *s = new ScavTrap("first Scav");
	s->challengeNewcomer();
	s->meleeAttack("tar1");
	s->rangedAttack("tar2");
	s->takeDamage(30);
	s->takeDamage(20);
	s->beRepaired(50);
	s->takeDamage(150);
	s->beRepaired(200);
	s->challengeNewcomer();
	s->challengeNewcomer();
	s->challengeNewcomer();

	std::cout<< " <<< NinjaTrap >>> \n\n";

	NinjaTrap *nin = new NinjaTrap("first Ninja Trap"); // string constructor
	NinjaTrap *nin2 = new NinjaTrap(); // Default constructor
	ClapTrap *cl = new ClapTrap();
	nin->ninjaShoebox(*f); // FragTrap parameter
	nin->ninjaShoebox(*s); // ScavTrap parameter
	nin->meleeAttack("nin target1");
	nin->rangedAttack("nin target2");
	nin->takeDamage(20);
	nin->takeDamage(40);
	nin->beRepaired(10);
	nin->takeDamage(100);
	nin->beRepaired(200);
	nin->ninjaShoebox(*nin2);
	nin->ninjaShoebox(*cl);

	delete(f);
	delete(s);
	delete(nin);
	delete(nin2);
	delete(cl);
	return (0);
}
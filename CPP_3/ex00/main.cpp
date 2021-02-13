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

int main(void)
{
	srand(time(0));
	FragTrap f("first Trap");
	f.vaulthunter_dot_exe("target1");
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
	return (0);
}
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
#include "SuperTrap.hpp"

int main(void)
{
	srand(time(0));

	std::cout<< " <<< SuperTrap >>> \n\n";

	SuperTrap s("first super");
	NinjaTrap n("first nin");
	FragTrap f("first frag");
	s.rangedAttack("Super target2");
	s.meleeAttack("Super target");
	
	s.ninjaShoebox(n);
	s.ninjaShoebox(f);
	s.vaulthunter_dot_exe("random target");
	return (0);
}
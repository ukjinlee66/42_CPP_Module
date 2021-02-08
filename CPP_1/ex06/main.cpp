/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 20:31:40 by youlee            #+#    #+#             */
/*   Updated: 2021/02/09 00:57:34 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void)
{
        {
            Weapon club = Weapon("crude spiked club");

            HumanA bob("Bob", club);
            bob.attack();
            club.setType("some other type of club");
            bob.attack();
        }
        {
            Weapon club = Weapon("crude spiked club");

            HumanB jim("Jim");
            jim.setWeapon(club);
            jim.attack();
            club.setType("some other type of club");
            jim.attack();
        }
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 22:45:31 by youlee            #+#    #+#             */
/*   Updated: 2021/02/16 22:45:32 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{

}
PlasmaRifle::PlasmaRifle(const PlasmaRifle &pl) : AWeapon(pl)
{

}
PlasmaRifle::~PlasmaRifle(void)
{

}
PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &pl)
{
    if (this == &pl)
        return (*this);
    AWeapon::operator=(pl);
    return (*this);
}
void    PlasmaRifle::attack(void) const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
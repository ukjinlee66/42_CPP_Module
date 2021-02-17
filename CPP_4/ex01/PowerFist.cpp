/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 22:45:53 by youlee            #+#    #+#             */
/*   Updated: 2021/02/16 22:45:54 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{

}
PowerFist::PowerFist(const PowerFist &po) : AWeapon(po)
{

}
PowerFist::~PowerFist(void)
{

}
PowerFist &PowerFist::operator=(const PowerFist &po)
{
    if (this == &po)
        return (*this);
    AWeapon::operator=(po);
    return (*this);
}
void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}
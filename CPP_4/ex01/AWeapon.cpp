/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 22:45:14 by youlee            #+#    #+#             */
/*   Updated: 2021/02/16 22:45:16 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : name(name), damage_point(damage), action_point(apcost)
{
    
}
AWeapon::~AWeapon()
{

}
AWeapon &AWeapon::operator=(const AWeapon &aw)
{
    if (this == &aw)
        return (*this);
    this->name = aw.getName();
    this->action_point = aw.getAPCost();
    this->damage_point = aw.getDamage();
    return (*this);
}
AWeapon::AWeapon(const AWeapon &aw)
{
    this->name = aw.getName();
    this->damage_point = aw.getDamage();
    this->action_point = aw.getAPCost();
}
std::string const AWeapon::getName() const
{
    return (this->name);
}
int AWeapon::getAPCost() const
{
    return (this->action_point);
}
int AWeapon::getDamage() const
{
    return (this->damage_point);
}
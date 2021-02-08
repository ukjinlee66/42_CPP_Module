/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 23:52:44 by youlee            #+#    #+#             */
/*   Updated: 2021/02/08 23:52:45 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
    this->type = "";
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::~Weapon(void)
{

}

void Weapon::setType(std::string type)
{
    this->type = type;
}
std::string const &Weapon::getType(void) const
{
    return (this->type);
}
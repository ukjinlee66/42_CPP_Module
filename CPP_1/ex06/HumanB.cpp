/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 23:53:28 by youlee            #+#    #+#             */
/*   Updated: 2021/02/08 23:53:29 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

void HumanB::setWeapon(Weapon w)
{
    this->w = w;
}

void HumanB::attack(void)
{
    std::cout<<this->name<<" attack with his "<<this->w.getType()<<std::endl;
}
HumanB::HumanB(void)
{

}
HumanB::~HumanB(void)
{

}
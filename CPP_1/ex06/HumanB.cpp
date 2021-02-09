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

HumanB::HumanB(std::string name) : name(name), wea()
{
    
}

void HumanB::setWeapon(const Weapon &w)
{
    this->wea = &w;
}

void HumanB::attack(void)
{
    std::cout<<this->name<<" attack with his "<<this->wea->getType()<<std::endl;
}
HumanB::HumanB(void)
{

}
HumanB::~HumanB(void)
{

}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 23:53:07 by youlee            #+#    #+#             */
/*   Updated: 2021/02/08 23:53:08 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

const void HumanA::attack(void) const
{
    std::cout<<this->name<<" attack with his "<< this->w.getType() << std::endl;
}
HumanA::HumanA(void)
{

}
HumanA::HumanA(std::string const &name, const Weapon &w)
{
    this->name = name;
    this->w = w;
}
HumanA::~HumanA(void)
{

}

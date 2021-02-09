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

void HumanA::attack(void) const
{
    std::cout<<this->name<<" attack with his "<< this->wea.getType() << std::endl;
}
HumanA::HumanA(const HumanA& h) : name(h.name), wea(h.wea)
{

}
HumanA::HumanA(std::string name, Weapon& w) : name(name), wea(w)
{

}
HumanA::~HumanA(void)
{

}
HumanA& HumanA::operator=(HumanA& ref)
{
    if (&ref == this)
        return (*this);
    this->name = ref.name;
    this->wea = ref.wea;
    return (*this);
}
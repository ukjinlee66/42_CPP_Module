/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 18:30:07 by youlee            #+#    #+#             */
/*   Updated: 2021/02/14 18:30:08 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void)
{
    this->set_name("default Peon");
}
Peon::Peon(Peon const &co) : name(co.get_name())
{
    std::cout<<"Zog zog."<<std::endl;
}
Peon::Peon(std::string name) : name(name)
{
    std::cout<<"Zog zog."<<std::endl;
}
Peon::~Peon(void)
{
    std::cout<<"Bleuark..."<<std::endl;
}
void Peon::getPolymorphed(void) const
{
    std::cout<<this->get_name()<<" has been turned into a pink pony!"<<std::endl;
}
void Peon::set_name(std::string const name)
{
    this->name = name;
}
std::string Peon::get_name(void) const
{
    return (this->name);
}
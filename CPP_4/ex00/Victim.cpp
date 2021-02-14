/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 18:29:47 by youlee            #+#    #+#             */
/*   Updated: 2021/02/14 18:29:48 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string const name)
{
    this->set_name(name);
    std::cout<<"Some random victim called "<<this->get_name()<<" just appeared!"<<std::endl;
}
Victim::~Victim(void)
{
    std::cout<<"Victim "<<this->get_name()<<" just died for no apparent reason!"<<std::endl;
}
void Sorcerer::set_name(std::string const name)
{
    this->name = name;
}
std::string Sorcerer::get_name(void) const
{
    return (this->name);
}
void Victim::getPolymorphed() const
{
    std::cout<<this->get_name()<<" has been turned into a cute little sheep!"<<std::endl;
}
std::ostream &Victim::operator<<(std::ostream &os, Victim &vi)
{
    os << "I'm "<<vi.get_name()<<" and I like otters!"<<std::endl;
    return (os);
}
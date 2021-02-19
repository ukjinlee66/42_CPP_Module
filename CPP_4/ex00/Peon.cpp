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


Peon::Peon(std::string name) : Victim(name)
{
    std::cout<<"Zog zog."<<std::endl;
}

Peon::Peon(Peon const &co) : Victim(co.get_name())
{
    std::cout<<"Zog zog."<<std::endl;
}
Peon::~Peon(void)
{
    std::cout<<"Bleuark..."<<std::endl;
}
void Peon::getPolymorphed(void) const
{
    std::cout<< get_name() << " has been turned into a pink pony!" << std::endl;
}
Peon &Peon::operator=(const Peon &po)
{
    if (this == &po)
        return (*this);
    Victim::operator=(po);
    return (*this);
}



Neon::Neon(std::string name) : Victim(name)
{
    std::cout<<"Nog Nog."<<std::endl;
}

Neon::Neon(Neon const &co) : Victim(co.get_name())
{
    std::cout<<"Nog Nog."<<std::endl;
}
Neon::~Neon(void)
{
    std::cout<<"Neon is dead"<<std::endl;
}
void Neon::getPolymorphed(void) const
{
    std::cout<< get_name() << " has been turned into a neon pony!"<<std::endl;
}
Neon &Neon::operator=(const Neon &po)
{
    if (this == &po)
        return (*this);
    Victim::operator=(po);
    return (*this);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 18:29:31 by youlee            #+#    #+#             */
/*   Updated: 2021/02/14 18:29:32 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const name, std::string const title)
{
    std::cout<<name<<", "<<title<<", is born!"<<std::endl;
    this->name = name;
    this->title = title;
}
Sorcerer::~Sorcerer(void)
{
    std::cout<<this->name<<", "<<this->title<<", is dead. Consequences will never be the same!"<<std::endl;
}
void Sorcerer::set_name(std::string const name)
{
    this->name = name;
}
std::string Sorcerer::get_name(void) const
{
    return (this->name);
}
void Sorcerer::set_title(std::string const title)
{
    this->title = title;
}
std::string Sorcerer::get_title(void) const
{
    return (this->title);
}
std::ostream &operator<<(std::ostream &os, Sorcerer &so)
{
    os << "I am "<<so.get_name()<<", "<<so.get_title()<<", and I like ponies!"<<std::endl;
    return (os);
}
void Sorcerer::polymorph(Victim const &vi) const
{
    vi.getPolymorphed();
}
Sorcerer &Sorcerer::operator=(const Sorcerer &So)
{
    this->set_name(So.get_name());
    this->set_title(So.get_title());
    return (*this);
}
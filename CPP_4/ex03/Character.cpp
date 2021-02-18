/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:36:41 by youlee            #+#    #+#             */
/*   Updated: 2021/02/17 16:36:42 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : name(name)
{
    for(int i=0;i<4;i++)
        this->inven[i] = NULL;
}
Character::Character(const Character &ch)
{
    this->name = ch.getName();
    for(int i=0;i<4;i++)
    {
        if (this->inven[i])
            delete this->inven[i];
    }
    for(int i=0;i<4;i++)
    {
        if (ch.inven[i])
            this->inven[i] = ch.inven[i]->clone();
    }
}
Character &Character::operator=(const Character &ch)
{
    if (this == &ch)
        return (*this);
    this->name = ch.getName();
    for(int i=0;i<4;i++)
    {
        if (ch.inven[i])
            this->inven[i] = ch.inven[i];
        else
            this->inven[i] = NULL;
    }
    return (*this);
}
Character::~Character()
{
    for(int i=0;i<4;i++)
    {
        if (this->inven[i])
            delete (this->inven[i]);
    }
}
std::string const & Character::getName() const
{
    return (this->name);
}
void Character::equip(AMateria* m)
{
    int i = 0;
    while (this->inven[i])
        i++;
    if (i < 4)
        this->inven[i] = m;
}
void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        return;
    this->inven[i] = NULL;
}
void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || 3 < idx)
        return ;
    this->inven[idx]->use(target);
}
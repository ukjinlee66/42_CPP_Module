/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 22:46:48 by youlee            #+#    #+#             */
/*   Updated: 2021/02/16 22:46:52 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : name(name), action_point(40)
{

}
Character::Character(const Character &ch) : name(ch.name), action_point(ch.action_point), aw(ch.aw)
{

}
Character::~Character(void)
{

}
Character &Character::operator=(const Character &ch)
{
    if (this == &ch)
        return(*this);
    this->name = ch.getName();
    this->action_point = ch.getAp();
    this->aw = ch.getWeapon();
    return (*this);
}
void Character::recoverAP()
{
    int h;

    if (this->action_point + 10 <= 40)
        this->action_point += 10;
    else
    {
        h = 40 - this->action_point;
        if (h <= 0)
            return;
        this->action_point += h;
    }
}
void Character::equip(AWeapon   *weapon)
{
    this->aw = weapon;
}
void Character::attack(Enemy    *enemy)
{
    if (this->aw == NULL)
    {
        std::cout << "not exist weapon!" << std::endl;
        return ;
    }
    if (this->action_point < this->aw->getAPCost())
    {
        std::cout << "Not enough Action Point!" << std::endl;
        return ;
    }
    if (enemy == NULL)
    {
        std::cout << "already dead enemy!" << std::endl;
        return ;
    }
    enemy->takeDamage(this->aw->getDamage());
    std::cout << this->getName() << " attacks "<<enemy->getType()<<" with a "<<this->aw->getName()<<std::endl;
    this->aw->attack();
    this->action_point -= this->aw->getAPCost();
    if (enemy->getHP() <= 0)
        delete (enemy);
}
std::string const Character::getName() const
{
    return (this->name);
}
int Character::getAp() const
{
    return (this->action_point);
}
AWeapon* Character::getWeapon() const
{
    return (this->aw);
}
std::ostream &operator<<(std::ostream &os, const Character &ch)
{
    if (ch.getWeapon())
        os << ch.getName()<<" has "<<ch.getAp()<<" AP and wields a "<<ch.getWeapon()->getName()<<std::endl;
    else
        os << ch.getName()<<" has "<<ch.getAp()<<" AP and is unarmed" << std::endl;
    return (os);
}
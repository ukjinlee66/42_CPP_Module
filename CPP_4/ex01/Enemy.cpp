/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 22:46:01 by youlee            #+#    #+#             */
/*   Updated: 2021/02/16 22:46:02 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : type(type), hp(hp)
{

}
Enemy::~Enemy(void)
{

}
Enemy::Enemy(const Enemy &en) : type(en.type), hp(en.hp)
{

}
Enemy &Enemy::operator=(const Enemy &en)
{
    if (this == &en)
        return (*this);
    this->hp = en.hp;
    this->type = en.type;
    return (*this);
}
std::string const Enemy::getType() const
{
    return (this->type);
}
int Enemy::getHP(void) const
{
    return (this->hp);
}
void Enemy::takeDamage(int amount)
{
    if (amount < 0)
    {
        std::cout << "incorrect takeDamage amount!" << std::endl;
    }
    this->hp -= amount;
    if (hp < 0) hp = 0;
}
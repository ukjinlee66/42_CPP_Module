/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:14:12 by youlee            #+#    #+#             */
/*   Updated: 2021/02/07 15:15:08 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(void)
{

}

ZombieHorde::ZombieHorde(int n)
{
    if (n <= 0 || n >= 2147483647)
    {
        std::cout<<"wrong number N\n";
        std::cout<<"retry call constructor\n";
        return ;
    }
    this->zomb = new Zombie[n]; //dynamic allocation number N
    this->num = n;
    srand(time(0));
    std::string Namepool[10] = {"jason", "youlee", "junkang", "sseo", "hycho", "seoh", "seongwpa",
        "yong-lee", "dson", "jeoryu"};
    for(int i=0;i<n;i++)
    {
        zomb[i].set_name(Namepool[rand() % 10]);
    }
}
ZombieHorde::~ZombieHorde(void)
{
    delete []this->zomb;
}

void ZombieHorde::set_num(int n)
{
    this->num = n;
}
int ZombieHorde::get_num(void)
{
    return (this->num);
}

void ZombieHorde::announce(void)
{
    for(int i=0;i<this->num;i++)
        this->zomb[i].announce();
}
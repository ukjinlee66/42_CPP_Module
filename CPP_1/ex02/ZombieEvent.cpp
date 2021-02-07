/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 17:20:44 by youlee            #+#    #+#             */
/*   Updated: 2021/02/05 17:20:45 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

std::string Namepool[10] = {"jason", "youlee", "junkang", "sseo", "hycho", "seoh", "seongwpa",
"yong-lee", "dson", "jeoryu"};

void ZombieEvent::set_type(std::string type)
{
    this->type = type;
}
std::string ZombieEvent::get_type(void)
{
    return (this->type);
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    return (new Zombie(name, this->type));
}
Zombie* ZombieEvent::randomChump(void)
{
    int num;

    std::srand(time(0));
    num = std::rand()%10; // 0~9
    Zombie *z = new Zombie(Namepool[num], this->type);
    return (z);
}
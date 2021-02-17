/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 22:46:16 by youlee            #+#    #+#             */
/*   Updated: 2021/02/16 22:46:17 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

void SuperMutant::takeDamage(int amount)
{
    amount -= 3;
    Enemy::takeDamage(amount);
}
SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}
SuperMutant::~SuperMutant(void)
{
    std::cout << "Aaargh..." << std::endl;
}
SuperMutant &SuperMutant::operator=(const SuperMutant &su)
{
    if (this == &su)
        return (*this);
    Enemy::operator=(su);
    return (*this);
}
SuperMutant::SuperMutant (const SuperMutant &su) : Enemy(su)
{

}
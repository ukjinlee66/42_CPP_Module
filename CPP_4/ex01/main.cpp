/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 22:47:00 by youlee            #+#    #+#             */
/*   Updated: 2021/02/16 22:47:01 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
    Character* me = new Character("me");

    std::cout << *me;

    Enemy* b = new RadScorpion();
    Enemy* c = new SuperMutant();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();

    if (b)
        std::cout << b->getType() << " has " << b->getHP() << " HP." << std::endl;
    me->attack(b);
    if (c)
        std::cout << c->getType() << " has " << c->getHP() << " HP." << std::endl;
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    std::cout << *me;
    me->attack(b);
    if (b)
        std::cout << b->getType() << " has " << b->getHP() << " HP." << std::endl;
    me->attack(c);
    if (c)
        std::cout << c->getType() << " has " << c->getHP() << " HP." << std::endl;
    std::cout << *me;
    me->recoverAP();
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;

    return (0);
}
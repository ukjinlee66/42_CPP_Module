/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 17:20:53 by youlee            #+#    #+#             */
/*   Updated: 2021/02/10 13:09:20 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
    Zombie *z1;
    ZombieEvent event;

    z1 = new Zombie("first zom", "first type");
    z1->announce();
    delete (z1);

    z1 = event.newZombie("second zom");
    z1->announce();
    delete (z1);

    event.set_type("event type");
    z1 = event.newZombie("third zom");
    z1->announce();
    delete (z1);

    event.set_type("event type2");
    z1 = event.randomChump();
    z1->announce();
    delete (z1);
    
    return (0);
}

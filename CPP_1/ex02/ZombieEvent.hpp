/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 17:20:38 by youlee            #+#    #+#             */
/*   Updated: 2021/02/05 17:20:39 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <ctime>

class ZombieEvent
{
    public:
        void set_type(std::string type);
        std::string get_type(void);
        Zombie* newZombie(std::string name);
        Zombie* randomChump(void);
    private:
        std::string type;
};

#endif
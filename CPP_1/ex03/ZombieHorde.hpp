/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:15:19 by youlee            #+#    #+#             */
/*   Updated: 2021/02/07 15:15:21 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <ctime>

class ZombieHorde
{
    private:
        Zombie  *zomb;
        int     num;
    public:
        ZombieHorde(void);
        ZombieHorde(int n);
        ~ZombieHorde();
        void set_num(int n);
        int  get_num(void);
        void announce(void);
};
#endif
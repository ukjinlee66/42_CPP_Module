/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 22:46:05 by youlee            #+#    #+#             */
/*   Updated: 2021/02/16 22:46:06 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <iostream>
#include <string>

class Enemy
{
    private:
        std::string type;
        int hp;
    public:
        Enemy(int hp, std::string const & type);
        virtual ~Enemy(void);
        Enemy(const Enemy &en);
        Enemy &operator=(const Enemy &en);
        std::string const getType() const;
        int getHP(void) const;

        virtual void takeDamage(int amount);
};

#endif
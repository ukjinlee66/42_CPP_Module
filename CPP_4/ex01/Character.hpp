/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 22:46:55 by youlee            #+#    #+#             */
/*   Updated: 2021/02/16 22:46:56 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
    private:
        std::string name;
        int action_point;
        AWeapon *aw;
    public:
        Character(std::string const & name);
        Character(const Character &ch);
        ~Character(void);
        Character &operator=(const Character &ch);
        void recoverAP();
        void equip(AWeapon* weapon);
        void attack(Enemy* enemy);
        std::string const getName() const;
        int getAp() const;
        AWeapon* getWeapon() const;
};
std::ostream &operator<<(std::ostream &os, const Character &ch);

#endif
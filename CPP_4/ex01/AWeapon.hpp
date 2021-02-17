/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 22:45:09 by youlee            #+#    #+#             */
/*   Updated: 2021/02/16 22:45:11 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP
#include <iostream>
#include <string>

class AWeapon
{
    private:
        std::string name;
        int         damage_point;
        int         action_point;
    public:
        AWeapon(std::string const & name, int apcost, int damage);
        AWeapon(const AWeapon &aw);
        virtual ~AWeapon();
        AWeapon &operator=(const AWeapon &aw);
        std::string const getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const = 0;
};
#endif
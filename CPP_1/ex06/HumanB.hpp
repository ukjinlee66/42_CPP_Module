/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 23:53:36 by youlee            #+#    #+#             */
/*   Updated: 2021/02/08 23:53:37 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        const Weapon *wea;
    public:
        void setWeapon(const Weapon &w);
        void attack(void);
        HumanB(void);
        HumanB(std::string name);
        ~HumanB(void);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 23:53:13 by youlee            #+#    #+#             */
/*   Updated: 2021/02/08 23:53:14 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon &wea;
    public:
        void attack(void) const;
        HumanA(const HumanA &h);
        HumanA(std::string name, Weapon &w);
        ~HumanA(void);
        HumanA& operator=(HumanA& ref);
};

#endif
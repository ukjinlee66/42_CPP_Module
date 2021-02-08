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
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    private:
        const Weapon &w;
        std::string name;
    public:
        const void attack(void) const;
        HumanA(void);
        HumanA(std::string const &name, const Weapon &w);
        ~HumanA(void);
};

#endif
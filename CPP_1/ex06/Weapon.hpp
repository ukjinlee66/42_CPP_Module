/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 23:52:51 by youlee            #+#    #+#             */
/*   Updated: 2021/02/08 23:52:52 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(void);
        Weapon(std::string type);
        ~Weapon(void);
        void setType(std::string type);
        std::string const &getType(void) const;

};

#endif
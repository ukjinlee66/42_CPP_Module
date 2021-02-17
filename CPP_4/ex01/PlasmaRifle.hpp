/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 22:45:36 by youlee            #+#    #+#             */
/*   Updated: 2021/02/16 22:45:37 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP
#include <iostream>
#include <string>
#include "AWeapon.hpp"
class PlasmaRifle : public  AWeapon
{
    private:
    public:
        PlasmaRifle(void);
        PlasmaRifle(const PlasmaRifle &pl);
        virtual ~PlasmaRifle(void);
        PlasmaRifle &operator=(const PlasmaRifle &pl);
        void attack() const;
};
#endif
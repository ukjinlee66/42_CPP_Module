/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 22:45:47 by youlee            #+#    #+#             */
/*   Updated: 2021/02/16 22:45:49 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP
#include <iostream>
#include <string>
#include "AWeapon.hpp"
class PowerFist : public AWeapon
{
    private:
    public:
        PowerFist(void);
        PowerFist(const PowerFist &po);
        virtual ~PowerFist(void);
        PowerFist &operator=(const PowerFist &po);
        void attack() const;
};
#endif

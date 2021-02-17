/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 22:46:20 by youlee            #+#    #+#             */
/*   Updated: 2021/02/16 22:46:22 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP
#include <iostream>
#include <string>
#include "Enemy.hpp"
class SuperMutant : public Enemy
{
    private:
    public:
        void takeDamage(int amount);
        SuperMutant(void);
        virtual ~SuperMutant(void);
        SuperMutant &operator=(const SuperMutant &su);
        SuperMutant (const SuperMutant &su);
};
#endif
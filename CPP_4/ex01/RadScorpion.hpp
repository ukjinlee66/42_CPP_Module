/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 22:46:39 by youlee            #+#    #+#             */
/*   Updated: 2021/02/16 22:46:40 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP
#include <iostream>
#include <string>
#include "Enemy.hpp"
class RadScorpion : public Enemy
{
    private:
    public:
        RadScorpion(void);
        virtual ~RadScorpion(void);
        RadScorpion (const RadScorpion &ra);
        RadScorpion &operator=(const RadScorpion &ra);
};

#endif
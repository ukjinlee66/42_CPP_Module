/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 22:46:34 by youlee            #+#    #+#             */
/*   Updated: 2021/02/16 22:46:36 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}
RadScorpion::~RadScorpion(void)
{
    std::cout<< "* SPROTCH *" << std::endl;
}
RadScorpion::RadScorpion (const RadScorpion &ra) : Enemy(ra)
{

}
RadScorpion &RadScorpion::operator=(const RadScorpion &ra)
{
    if (this == &ra)
        return (*this);
    Enemy::operator=(ra);
    return (*this);
}
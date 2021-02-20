/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:34:35 by youlee            #+#    #+#             */
/*   Updated: 2021/02/17 16:34:36 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}
TacticalMarine::TacticalMarine(const TacticalMarine &)
{

}
TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh..." <<std::endl;
}
TacticalMarine &TacticalMarine::operator=(const TacticalMarine &ta)
{
    if (this == &ta)
        return (*this);
    return (*this);
}
ISpaceMarine* TacticalMarine::clone() const
{
    return (new TacticalMarine(*this));
}
void TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT!" << std::endl;
}
void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with a bolter *" << std::endl;
}
void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with a chainsword *" << std::endl;
}
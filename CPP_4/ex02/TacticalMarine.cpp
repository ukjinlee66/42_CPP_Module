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

TackticalMarine::TackticalMarine()
{
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}
TackticalMarine::TackticalMarine(const TackticalMarine &)
{

}
TackticalMarine::~TackticalMarine()
{
    std::cout << "Aaargh..." <<std::endl;
}
TackticalMarine &TackticalMarine::operator=(const TackticalMarine &ta)
{
    if (this == &ta)
        return (*this);
    return (*this);
}
ISpaceMarine* TackticalMarine::clone() const
{
    return (new TackticalMarine(*this));
}
void TackticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT!" << std::endl;
}
void TackticalMarine::rangedAttack() const
{
    std::cout << "* attacks with a bolter *" << std::endl;
}
void TackticalMarine::meleeAttack() const
{
    std::cout << "* attacks with a chainsword *" << std::endl;
}
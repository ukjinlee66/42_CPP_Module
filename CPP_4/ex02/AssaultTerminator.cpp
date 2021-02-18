/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:34:47 by youlee            #+#    #+#             */
/*   Updated: 2021/02/17 16:34:48 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
}
AssaultTerminator::AssaultTerminator(const AssaultTerminator &)
{

}
AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I’ll be back..." <<std::endl;
}
AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &as)
{
    if (this == &as)
        return (*this);
    return (*this);
}
ISpaceMarine* AssaultTerminator::clone() const
{
    return (new AssaultTerminator(*this));
}
void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}
void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}
void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}
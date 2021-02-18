/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:36:01 by youlee            #+#    #+#             */
/*   Updated: 2021/02/17 16:36:02 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const AMateria &am) : _type(am._type), _xp(am._xp)
{

}
AMateria::AMateria(std::string const & type) : _type(am._type), _xp(0)
{

}
AMateria::~AMateria()
{

}
AMateria &AMateria::operator=(const AMateria &am)
{
    if (this == &am)
        return (*this);
    return (*this);
}
std::string const & AMateria::getType() const
{
    return (this->_type);
}
unsigned int AMateria::getXP() const
{
    return (this->_xp);
}
void AMateria::use(ICharacter& target)
{
    this->_xp += 10;
}
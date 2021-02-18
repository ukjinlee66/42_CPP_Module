/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:36:15 by youlee            #+#    #+#             */
/*   Updated: 2021/02/17 16:36:16 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
Ice::Ice() : AMateria("ice")
{

}
Ice::Ice(const Ice &ic) : AMateria(ic)
{

}
Ice::~Ice()
{

}
Ice &Ice::operator=(const Ice &ic)
{
    if (this == &ic)
        return (*this);
    AMateria::operator=(ic);
    return (*this);
}
AMateria* Ice::clone() const
{
    return (new Ice(*this));
}
void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at NAME *" << std::endl;
    AMateria::use(target);
}
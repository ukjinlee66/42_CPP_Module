/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:36:28 by youlee            #+#    #+#             */
/*   Updated: 2021/02/17 16:36:29 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
Cure::Cure() : AMateria("cure")
{

}
Cure::Cure(const Cure &cu) : AMateria(cu)
{

}
Cure::~Cure()
{

}
Cure &Cure::operator=(const Cure &cu)
{
    if (this == &cu)
        return (*this);
    AMateria::operator=(cu);
    return (*this);
}
AMateria* Cure::clone() const
{
    return (new Cure(*this));
}
void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
    AMateria::use(target);
}
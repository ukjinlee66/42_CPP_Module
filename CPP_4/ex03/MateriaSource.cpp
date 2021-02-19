/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:36:54 by youlee            #+#    #+#             */
/*   Updated: 2021/02/17 16:36:55 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for(int i=0;i<4;i++)
        this->_in[i] = NULL;
}
MateriaSource &MateriaSource::operator=(const MateriaSource &ma)
{
    if (this == &ma)
        return (*this);
    for(int i=0;i<4;i++)
    {
        if (ma._in[i])
            this->_in[i] = ma._in[i];
        else
            this->_in[i] = NULL;
    }
    return (*this);
}
MateriaSource::MateriaSource(const MateriaSource &ma)
{
    for(int i=0;i<4;i++)
    {
        if (this->_in[i])
            delete this->_in[i];
    }
    for(int i=0;i<4;i++)
    {
        if (ma._in[i])
            this->_in[i] = ma._in[i]->clone();
    }
}
MateriaSource::~MateriaSource()
{
    for(int i=0;i<4;i++)
        if (this->_in[i])
            delete (this->_in[i]);
}
void MateriaSource::learnMateria(AMateria *am)
{
    for(int i=0;i<4;i++)
    {
        if (this->_in[i] == NULL)
        {
            this->_in[i] = am;
            return ;
        }
    }
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i=0;i<3;i++)
    {
        if (this->_in[i] && this->_in[i]->getType() == type)
            return (this->_in[i]->clone());
    }
    return (0);
}
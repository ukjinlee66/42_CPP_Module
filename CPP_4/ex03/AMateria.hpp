/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:35:53 by youlee            #+#    #+#             */
/*   Updated: 2021/02/17 16:35:56 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
    private:
        std::string  _type;
        unsigned int _xp;
    public:
        AMateria(const AMateria &am);
        AMateria(std::string const & type);
        virtual ~AMateria();
        AMateria &operator=(const AMateria &am);
        std::string const & getType() const; //Returns the materia type
        unsigned int getXP() const; //Returns the Materia's XP
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter&);
};

#endif
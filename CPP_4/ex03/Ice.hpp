/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:36:12 by youlee            #+#    #+#             */
/*   Updated: 2021/02/17 16:36:13 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice &ic);
        virtual ~Ice();
        Ice &operator=(const Ice &ic);
        AMateria* clone() const;
        void use(ICharacter& target);
};
#endif
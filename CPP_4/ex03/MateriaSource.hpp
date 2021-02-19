/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:36:50 by youlee            #+#    #+#             */
/*   Updated: 2021/02/17 16:36:51 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include <iostream>
#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
class MateriaSource : public IMateriaSource
{
    private:
        AMateria *_in[4];
    public:
        MateriaSource(void);
        MateriaSource &operator=(const MateriaSource &ma);
        MateriaSource(const MateriaSource &ma);
        virtual ~MateriaSource();
        
        void learnMateria(AMateria *am);
        AMateria* createMateria(std::string const & type);
};
#endif
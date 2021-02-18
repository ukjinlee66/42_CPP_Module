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
class MateriaSource : public IMateriaSource
{
    private:
    public:
        MateriaSource &operator=(const MateriaSource &ma);
        MateriaSource(const MateriaSource &ma);
        virtual ~MateriaSource();
        
        void learnMateria(AMateria*) = 0;
        AMateria* createMateria(std::string const & type) = 0;
};
#endif
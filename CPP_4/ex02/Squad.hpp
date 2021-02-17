/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:34:19 by youlee            #+#    #+#             */
/*   Updated: 2021/02/17 16:34:20 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include <iostream>
#include <string>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
    private:
        typedef struct units
        {
            ISpaceMarine* marine;
            struct units* next;
        }unit;
        unit *list;
    public:
        Squad(void);
        virtual ~Squad(void);
        Squad(const Squad &sq);
        Squad &operator=(const Squad &sq);
        int getCount() const;
        ISpaceMarine* getUnit(int n) const;
        int push(ISpaceMarine *sm);
};

#endif
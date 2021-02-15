/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 18:30:00 by youlee            #+#    #+#             */
/*   Updated: 2021/02/14 18:30:01 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim
{
    protected:
        std::string name;
    public:
        void set_name(std::string const name);
        std::string get_name(void) const;
        Peon(void);
        Peon(Peon const &co);
        Peon(std::string name);
        virtual ~Peon(void);
        void getPolymorphed() const;
};

#endif
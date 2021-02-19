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
    private:
        Peon(void);
    public:
        Peon(Peon const &co);
        Peon(std::string name);
        Peon &operator=(const Peon &po);
        virtual ~Peon(void);
        void getPolymorphed() const;
};

class Neon : public Victim
{
    private:
        Neon(void);
    public:
        Neon(Neon const &co);
        Neon(std::string name);
        Neon &operator=(const Neon &po);
        virtual ~Neon(void);
        void getPolymorphed() const;
};

#endif
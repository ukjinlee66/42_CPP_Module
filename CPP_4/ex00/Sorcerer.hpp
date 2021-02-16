/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 18:29:25 by youlee            #+#    #+#             */
/*   Updated: 2021/02/14 18:29:26 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
    protected:
    std::string name;
    std::string title;

    public:
    void set_name(std::string const name);
    std::string get_name(void) const;
    void set_title(std::string const title);
    std::string get_title(void) const;
    void polymorph(Victim const &vi) const;
    Sorcerer(void);
    Sorcerer(std::string const name, std::string const title);
    virtual ~Sorcerer(void);
    Sorcerer &operator=(const Sorcerer &So);
};
std::ostream &operator<<(std::ostream &os, Sorcerer &so);
#endif

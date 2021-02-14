/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 18:29:41 by youlee            #+#    #+#             */
/*   Updated: 2021/02/14 18:29:42 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{
    protected:
        std::string name;
    public:
        Victim(std::string const name);
        ~Victim(void);
        void set_name(std::string const name);
        std::string get_name(void) const;
        void getPolymorphed() const;
        void polymorph(Victim const &) const;
};
std::ostream &operator<<(std::ostream &os, Victim &vi);
#endif
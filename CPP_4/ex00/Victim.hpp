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
    private:
        std::string name;
        Victim(void);
    public:
        
        Victim(Victim const &vi);
        Victim(std::string const name);
        virtual ~Victim(void);
        void set_name(std::string const name);
        std::string get_name(void) const;
        virtual void getPolymorphed() const;
        void polymorph(Victim const &) const;
        Victim &operator=(const Victim &vi);
};
std::ostream &operator<<(std::ostream &os, Victim &vi);
#endif
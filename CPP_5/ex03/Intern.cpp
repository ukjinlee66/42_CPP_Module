/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 01:16:19 by youlee            #+#    #+#             */
/*   Updated: 2021/02/21 01:16:21 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
Intern::Intern(void) {}
Intern::Intern(const Intern &in) { *this = in; }
Intern &Intern::operator=(const Intern &in)
{
    if (this == &in)
        return (*this);
    return (*this);
}
Intern::~Intern(void) {}
Form* Intern::makeForm(std::string const &name, std::string const &target)
{
    
}
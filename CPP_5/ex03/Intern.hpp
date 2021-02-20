/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 01:16:14 by youlee            #+#    #+#             */
/*   Updated: 2021/02/21 01:16:15 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include <string>
#include "Form.hpp"

class Intern
{
    public:
        Intern(void);
        Intern(const Intern &in);
        Intern &operator=(const Intern &in);
        virtual ~Intern(void);
        Form* makeForm(std::string const &name, std::string const &target);
}

struct Pair
{
    std::string name;
    std::string target;
}_pair;
#endif
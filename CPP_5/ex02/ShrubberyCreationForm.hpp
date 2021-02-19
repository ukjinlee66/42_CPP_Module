/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 16:32:50 by youlee            #+#    #+#             */
/*   Updated: 2021/02/19 16:32:51 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <iostream>
#include <exception>
#include <string>
#include <fstream>
#include "Form.hpp"
class Form;
class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm(std::string name));
        ShrubberyCreationForm(const ShrubberyCreationForm &sh);
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &sh);
};
#endif
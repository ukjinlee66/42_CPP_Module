/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 16:32:54 by youlee            #+#    #+#             */
/*   Updated: 2021/02/19 16:32:54 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name)) : Form(false, name, 145, 137)
{

}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &sh) : Form(sh)
{

}
ShrubberyCreationForm::~ShrubberyCreationForm() {}
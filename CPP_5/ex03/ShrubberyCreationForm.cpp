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
ShrubberyCreationForm::ShrubberyCreationForm(void) {}
ShrubberyCreationForm::ShrubberyCreationForm(std::string type) : Form(false, "shrubbery creation", 145, 137)
{
    this->setType(type);
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &sh) : Form(sh)
{
    this->setType(sh.getType());
}
ShrubberyCreationForm::~ShrubberyCreationForm() {}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &sh)
{
    if (this == &sh)
        return (*this);
    Form::operator=(sh);
    return (*this);
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    Form::execute(executor);
    std::ofstream file;

	file.open(std::string(this->getType() + "_shrubbery").c_str(), std::ios::out | std::ios::app);
	if(file.is_open())
	{
		file << "                 # #### ####			" << std::endl;
        file << "               ### \\/#|### |/####		" << std::endl;
        file << "              ##\\/#/ \\||/##/_/##/_#	" << std::endl;
        file << "            ###  \\/###|/ \\/ # ###	" << std::endl;
        file << "          ##_\\_#\\_\\## | #/###_/_####" << std::endl;
        file << "         ## #### # \\ #| /  #### ##/##	" << std::endl;
        file << "          __#_--###`  |{,###---###-~	" << std::endl;
        file << "                    \\ }{				" << std::endl;
        file << "                     }}{				" << std::endl;
        file << "                     }}{				" << std::endl;
        file << "                     {{}				" << std::endl;
        file << "               , -=-~{ .-^- _			" << std::endl;
        file << "                     `}				" << std::endl;
        file << "                      {				" << std::endl;
		file.close();
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 16:33:03 by youlee            #+#    #+#             */
/*   Updated: 2021/02/19 16:33:04 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
RobotomyRequestForm::RobotomyRequestForm(void) {}
RobotomyRequestForm::RobotomyRequestForm(std::string type) : Form(false, "robotomy request", 72, 45)
{
    this->setType(type);
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ro) : Form(ro)
{
    this->setType(ro.getType());
}
RobotomyRequestForm::~RobotomyRequestForm() {}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &ro)
{
    if (this == &ro)
        return (*this);
    Form::operator=(ro);
    return (*this);
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    Form::execute(executor);
    std::cout << "Drrrdr...drrdDDrr..." << std::endl;
	if(((rand() % 2)) == 1)
		std::cout << this->getType() << " was robotomized!" << std::endl;
	else
		std::cout << "robotomized failure!" << std::endl;
}
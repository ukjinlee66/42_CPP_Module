/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 16:33:18 by youlee            #+#    #+#             */
/*   Updated: 2021/02/19 16:33:19 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
PresidentialPardonForm::PresidentialPardonForm(void) {}
PresidentialPardonForm::PresidentialPardonForm(std::string type) : Form(false, "PresidentialPardonForm", 25, 5)
{
    this->setType(type);
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &pr) : Form(pr)
{
    this->setType(pr.getType());
}
PresidentialPardonForm::~PresidentialPardonForm() {}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &pr)
{
    if (this == &pr)
        return (*this);
    Form::operator=(pr);
    return (*this);
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    Form::execute(executor);
    std::cout << this->getType() << " was pardonned by Zafod Beeblebrox." << std::endl;
}
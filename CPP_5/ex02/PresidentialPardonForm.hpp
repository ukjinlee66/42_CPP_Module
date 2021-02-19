/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 16:33:14 by youlee            #+#    #+#             */
/*   Updated: 2021/02/19 16:33:15 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include <iostream>
#include <exception>
#include <string>
#include "Form.hpp"
class Form;
class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm(std::string name));
        PresidentialPardonForm(const PresidentialPardonForm &sh);
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(const PresidentialPardonForm &sh);

};
#endif
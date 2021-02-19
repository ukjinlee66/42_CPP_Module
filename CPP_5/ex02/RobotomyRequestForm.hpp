/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 16:33:07 by youlee            #+#    #+#             */
/*   Updated: 2021/02/19 16:33:08 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include <exception>
#include <string>
#include "Form.hpp"
class Form;
class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm(std::string name));
        RobotomyRequestForm(const RobotomyRequestForm &sh);
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm &operator=(const RobotomyRequestForm &sh);

};
#endif
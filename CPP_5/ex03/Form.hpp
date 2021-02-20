/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youlee <youlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 14:47:25 by youlee            #+#    #+#             */
/*   Updated: 2021/02/19 14:47:26 by youlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
    private:
        bool        sign;
        std::string name;
        int         grade_required_to_sign;
        int         grade_required_to_execute;
        std::string type;
    public:
        Form(bool si, std::string name, int grs, int gre);
        virtual ~Form();
        Form(const Form &fo);
        Form &operator=(const Form &fo);
        Form(void);
        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            virtual const char* what() const throw();
        };
        std::string getName() const;
        bool        getSigned() const;
        int         get_req_sign_grade() const;
        int         get_req_exec_grade() const;
        void        beSigned(const Bureaucrat &bu);
        virtual void execute(Bureaucrat const &executor) const = 0;
        std::string getType() const;
        void        setType(std::string type);
};
std::ostream &operator<<(std::ostream &os, Form &fo);
#endif